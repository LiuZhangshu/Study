# 基于gitlab的持续集成方式

> 本文主要描述在gitlab上实现持续集成的方法

## 内容结构

- [工作目标](#工作目标)
- [gitlab-runner安装](#gitlab-runner安装)
- [Nexus搭建npm仓库](#nexus搭建npm仓库)
- [npm仓库使用介绍](#npm仓库使用介绍)
- [gitlab持续集成配置入门](#gitlab持续集成配置入门)
- [dev环境全过程的示例](#dev环境全过程的示例)
- [移动公司gitlab持续集成约定的规范](#移动公司gitlab持续集成约定的规范)

<br>
         

## 工作目标

目前我们有dev、pre、pro三套环境，分别对应于开发环境，预生产环境，生产环境：

* dev环境网络条件略差，数据基本为样例数据，仅用来开发验证性部署

* pre环境网络条件略差，数据为生产备份数据，在主集群发生故障时作为备用服务使用

* pro环境网络条件好，数据为生产数据，面向生产用户使用

我们希望每次在gitlab上面代码的变更，都会触发自动编译部署的过程，而不需要人工的后台干预。

## gitlab-runner安装

1.  **下载镜像：** `docker pull gitlab/gitlab-runner`
2.  **启动运行容器：**<br>

    ```
    docker run -d --name gitlab-runner --restart always \ -v /srv/gitlab-runner/config:/etc/gitlab-runner \ -v /var/run/docker.sock:/var/run/docker.sock \ gitlab/gitlab-runner:latest
    ```
    
3.  **进入容器：** `docker exec –it gitlab-runner bash`
4.  **注册runner**<br>
    ①Run the following command:`gitlab-runner register` <br>
    ②Enter your GitLab instance URL:<br>
    &emsp;Please enter the gitlab-ci coordinator URL (e.g. https://gitlab.com )           http://192.169.5.36:9000/gitlab/ <br>
    ③Enter the token you obtained to register the Runner:<br>
    &emsp;输入项目的token号<br>
    ④Enter a description for the Runner, you can change this later in GitLab's UI:<br>
    &emsp;Please enter the gitlab-ci description for this runner [hostame] my-runner<br>
    ⑤Enter the tags associated with the Runner, you can change this later in GitLab's UI:<br>
    &emsp;Please enter the gitlab-ci tags for this runner (comma separated): `my-tag,another-tag`<br>
    ⑥Choose whether the Runner should pick up jobs that do not have tags, you can change this later in GitLab's UI (defaults to false):<br>
    &emsp;Whether to run untagged jobs [true/false]: [false]: true<br>
    ⑦Choose whether to lock the Runner to the current project, you can change this later in GitLab's UI. Useful when the Runner is specific (defaults to true):<br>
    &emsp;Whether to lock Runner to current project [true/false]: [true]: false<br>
    ⑧Enter the Runner executor: docker<br>
    ⑨If you chose Docker as your executor, you'll be asked for the default image to be used for projects that do not define one in .gitlab-ci.yml:<br>
    &emsp;Please enter the Docker image (eg. ruby:2.1): alpine:latest<br>
5.  **注册后需要修改下runner的配置文件**<br>
    配置文件路径:`/etc/gitlab-runner/config.toml`<br>
    ①注意新增clone_url,这个是解决ci的时候去下拉代码到runner因域名地址无法访问无法下拉<br>
    ②修改privileged 避免出现某些目录没有使用权限<br>
    ③增加pull_policy 解决runner拉取镜像首先是去公网拉取<br>
    &emsp;配置文件详情见下面，修改后重启服务<br>

    ```
concurrent = 1
check_interval = 0
[[runners]]
name = "portal"
url = "http://192.169.5.36:9000/gitlab/"
token = "4ce0bc1c63918040d115d8816a8306"
executor = "docker"
clone_url = "http://192.169.5.36:9000/gitlab/"
[runners.docker]
tls_verify = false
image = "ruby:2.1"
privileged = true
disable_cache = false
volumes = ["/cache"]
shm_size = 0
pull_policy = "if-not-present"
[runners.cache]
    ```
```
     

## nexus搭建npm仓库

- 安装nexus生产环境已经安装完成
- 登陆nexus 使用admin帐户
- 登陆后打开设置，进入reposltorles
- 创建三个代理库（网络代理，本地代理，组合代理）
- 点击create reposltory 打开
- 创建 npm(hosted) , npm(proxy) 
- 创建npm(group) 将 hosted 和proxy 加入组合
- 打开设置 进入realms
- 将npm Bearer Token Realm 加入权限验证
- 创建一个npm 帐号
- 打开设置 进入 users 创建一个npm 用户。完成nexus npm代理仓库搭建目前npm统一的<br>
    账户是npm/Nsn@npm123$%^   <br>
    邮箱地址npm@npm.com<br>
    目前这个账户已经创建，大家可以使用这个账户。<br>


## npm仓库使用介绍

* 客户端安装node环境设置npm下载地址:<br>
    npm config set registry  https://nqi.gmcc.net:20443/nexus/repository/npm-repo-proxy/   ---代理地址这个地址是通过外网自动下载的<br>
    npm config set registry  https://nqi.gmcc.net:20443/nexus/repository/npm-repo-hosted/    --私库地址这个地址是本地通过命令上传的地址<br>
    npm config set registry  https://nqi.gmcc.net:20443/nexus/repository/npm-repo-group/    ---组合地址这个地址是我们项目最后使用的地址<br>
* 组合地址介绍：
    组合地址是指将网络代理和本地代理仓库合并，当本地node需要下载插件的时候 nexus会自动寻找组合地址中存在的插件，并且会下载最高版本号的插件<br>
    设置npm 本地客户端下载地址为组合地址后 打开项目 即可开始 使用 npm install 安装npm插件<br>
* Npm 客户端上传新的插件：<br>
    当本地客户端在nexus 找不到需要的插件后可以自行找官网下载插件包，下载完成的插件包 需要上传到 npm nexus代理仓库中<br>
    设置本地npm 下载地址为  私库地址 并且在本地添加一个user   ，该user需要在nexus上有这个用户<br>
* 添加user 命令：<br>
    Npm adduser 输入命令后需要输入账号密码和邮箱（注：该账号密码邮箱必须和nexus一致，如果不一致会导致后面上传插件提示没有权限）<br>
* 创建账号后,请登录输入npm，登陆命令npm login
* 登录命令输入后,会提示输入账号密码，请输入与nexus一致的账号密码就是上面创建的npm地址  提示登录成功
* 到此可以开始上传插件:<br>
    请打开插件目录 并在  有 package.json 文件的目录，首先指定你上传的库的地址，在这了你只能指定上面的私库地址即执行命令<br>

```
    npm config set registry  https://nqi.gmcc.net:20443/nexus/repository/npm-repo-hosted/ 
    ```

* 然后运行命令`npm publish`运行后 npm 会将该插件上传到私库地址上<br>
* 将本地npm重新设置成组合地址,并尝试从新安装npm插件<br>
    运行`npm install -loglevel info`  <br>
* 安装插件完成后 即可开始编译<br>
    运行`npm run` 命令 即可执行node编译<br>


## gitlab持续集成配置入门

在每个gitlab项目的根目录下，有一个 **.gitlab-ci.yml** 文件,所有有关持续集成的配置都在这个文件中进行描述

### 总体流程介绍

下面这个文件，描述了一个 **源代码编译-> 编译可部署的镜像文件 -> 部署镜像文件** 全过程的配置方法
```
services:
  # 这个镜像是gitlab定制的专门用来提供docker in docker 服务的，这样后续所有的任务都可以在不同的容器里面直接使用docker命令
  - name: docker:dind
    # 由于我们的docker reistry 使用http协议，没有使用https，为了能让gitlab能访问，这里要做额外的配置。目前这里没法使用变量替代服务器地址，以后再填坑吧
    command: ["--insecure-registry=192.169.5.7:5000"]

# 在所有job执行之前运行的命令，一般用来做一些环境配置的工作
before_script:
  - echo "begin script"
# 在所有的job执行完毕后执行的命令，一般用来做清理的工作
after_script:
  - echo "finished."

# stage说明整个部署的阶段任务，每个任务按顺序执行，只有前一个执行成功，后面一个才会继续执行，否则会返回失败并停止整个部署过程。
stages:
  # 这里定义了一个vue源代码的编译过程的阶段
  - dev_build_nodejs
  # 这里定义了一个maven源代码的编译过程的阶段
  - dev_build_source
  # 这里定义了一个将源代码编译后，生成可部署的镜像的阶段，一般要配合dockerfile一起使用
  - dev_build_image
  # 这里定义了一个将镜像通过docker swarm 部署到服务器的阶段，一般要配合docker-compose.yml
  - dev_deploy
  # 这里定义了一个进行功能测试的阶段
  - dev_test

```
### job 任务的定义

前面的 **stages** 定义了总体执行的顺序，每个阶段具体要做什么，由 **job** 来进行定义。<br>
为了避免job之间环境的冲突，我们规定了每个job都要在一个单独的容器中运行。我们为一些常用的job创建了一些容器模板。<br>
例如maven编译java源代码，可以用maven:3.3-jdk-8，编译docker镜像文件，可以用docker:latest。<br>
现有的可以直接使用的镜像如下表：<br>

<table>
<tr><td>
maven:3.3-jdk-8</td></tr><tr><td>
docker:latest</td></tr><tr><td>
docker:dind</td></tr><tr><td>
centos-ssh:1.2</td></tr><tr><td>
nokia/robot-rf:gmcc</td></tr><tr><td>
nokia/centos-node:gmcc1</td></tr><tr><td>
centos:jdk8</td></tr><tr><td>
nokia/redis:latest</td></tr>
</table>

>job 在哪里运行？
>
>>我们在gitlab上配置了一些 **runner**, job要制定自己希望在哪个runner上运行，runner上实际上跑的是docker容器

>容器的镜像从哪里获取？
>
>>gitlab 自带了docker的registry，可以使用 $CI_REGISTRY/镜像名称:tag 来获取镜像


#### 一个vue源代码编译的job的示例
##### 运行条件
* 源代码 **develop** 这个分支发生变更触发
* 在 **dev_build_nodejs** 这个阶段执行
* script运行在一个叫做centos-node:gmcc1的容器里面
* 指定该容器运行在一个叫做 **portal**  的 **runner** 里面

##### 运行内容
* 将本项目的源代码抓取下来（这个步骤是gitlab自动完成的，不需要额外配置）
* 运行sciprt中描述的指令（vue编译）
* 按照这个容器里面镜像的配置，vue编译好的结果，会放到`/builds/gitlab/$CI_PROJECT_PATH/code/web/dist/*`下面
* 为了编译的结果可以给下一个 **stage** 使用，通过artifacts指令将编译结果持久化保存下来
* 后续的镜像可以直接访问 `/builds/gitlab/$CI_PROJECT_PATH/code/web/dist/*` 里面的内容

```
dev_build_nodejs_job1:
  # 指定你所希望运行的容器名称
  # 例如 $CI_REGISTRY/alpine，这里使用了一个maven编译源代码的镜像，里面包含了java环境，maven工具
  image: $CI_REGISTRY/nokia/centos-node:gmcc1
  # 这里说明这个job是在哪个stage运行的
  stage: dev_build_nodejs
  # 指定希望持久化保存的输出内容
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/code/web/dist/*
  # 希望在容器中运行的指令
  script:
  #执行npm编译命令
    #cp google ie 到指定目录
    - cp -r /usr/local/node_modules  .
    #去Nexus库下载依赖包并且打印日志详情
    - npm install -loglevel info
    #执行npm编译
    - npm run builddevcov

  # 指定触发条件，在develop分支变化的时候触发运行
  only:
    - develop
  # 在标签为app7的runner上运行本程序
  tags:
    - portal
```

##### 完整编译过程的示例
```
services:
  - name: docker:dind
    command: ["--insecure-registry=192.169.5.7:5000"]
before_script:
  - echo "begin script"
after_script:
  - echo "finished."
stages:
  - dev_build_nodejs
  - dev_build_source
  - dev_build_image
  - dev_deploy
  - dev_test
dev_build_nodejs_job1:
  image: $CI_REGISTRY/maven:3.3-jdk-8
  stage: dev_build_nodejs
 artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/code/web/dist/*

  script:
    #进入到代码目录
    - cd code/web
    #执行npm编译命令
    - cp -r /usr/local/node_modules  .
    - npm install -loglevel info
    - npm run builddevcov
  only:
    # 在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为app7的runner上运行本程序
    - portal

```
以上就是一个完整的vue编译的ci过程



#### 一个maven源代码编译的job的示例
##### 运行条件
* 源代码 **develop** 这个分支发生变更触发
* 在 **dev_build_source** 这个阶段执行
* script运行在一个叫做maven:3.3-jdk-8的容器里面
* 指定该容器运行在一个叫做 **portal**  的 **runner** 里面

##### 运行内容
* 将本项目的源代码抓取下来（这个步骤是gitlab自动完成的，不需要额外配置）
* 运行sciprt中描述的指令（mvn编译）
* 按照这个容器里面镜像的配置，mvn编译好的结果，会放到`/builds/gitlab/$CI_PROJECT_PATH/code/target/*.war `下面
* 为了编译的结果可以给下一个 **stage** 使用，通过artifacts指令将编译结果持久化保存下来
* 后续的镜像可以直接访问 `/builds/gitlab/$CI_PROJECT_PATH/code/target/*.war` 里面的内容

```
dev_build_source_job1:
  # 指定你所希望运行的容器名称
  # 例如 $CI_REGISTRY/alpine，这里使用了一个maven编译源代码的镜像，里面包含了java环境，maven工具
  image: $CI_REGISTRY/maven:3.3-jdk-8
  # 这里说明这个job是在哪个stage运行的
  stage: dev_build_source
  # 指定希望持久化保存的输出内容
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/code/target/*.war
  # 希望在容器中运行的指令
  script:
    - source /etc/profile
    - cd code
    - mvn clean package -P develop_test
  # 指定触发条件，在develop分支变化的时候触发运行
  only:
    - develop
  # 在标签为app7的runner上运行本程序
  tags:
    - portal
```

##### 完整编译过程的示例
```
services:
  - name: docker:dind
    command: ["--insecure-registry=192.169.5.7:5000"]
before_script:
  - echo "begin script"
after_script:
  - echo "finished."
stages:
  - dev_build_source
  - dev_build_image
  - dev_deploy
  - dev_test
dev_build_source_job1:
  image: $CI_REGISTRY/maven:3.3-jdk-8
  stage: dev_build_source
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/code/target/*.war
  script:
    - source /etc/profile
    - cd code
    - mvn clean package -P develop_test
  only:
    - develop
  tags:
    - portal
```
以上就是一个完整的编译java的ci过程

#### 一个编制镜像的job的示例

前面的例子会将编译结果放到`/builds/gitlab/gdmcc_nokia/portal/code/target/*.war `<br>
这里要将编译好的war文件，放到image里面去，便于后续的部署<br>

```
dev_build_image_job1:
  # 这里可以是你希望使用的任意镜像
  # 在build镜像阶段用docker镜像就行
  image: $CI_REGISTRY/docker:latest
  stage: dev_build_image
  script:
    # 登陆docker远程镜像仓库，gitlab的环境变量存储了你的用户名和密码，下面这一行可以适用于任何project
    # 使用镜像是不需要登录的,但是我们这里最终要push镜像到仓库,需要先登录才能操作 
    # 这里的仓库,对应的是gitlab配置好的registry
    - docker login -u "$CI_REGISTRY_USER" -p "$CI_REGISTRY_PASSWORD" "$CI_REGISTRY"
    # 将上一个编译好的job的文件，放到docker_build的文件夹中
    - cp /builds/gitlab/$CI_PROJECT_PATH/code/target/*.war ./docker_build/
    # 我们默认在docker_build下有你写好的dockerfile
    # 这个指令会调用用dockerfile来制作镜像文件
    - docker build  -t $CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME ./docker_build/
    # 将镜像推送到镜像仓库
    - docker push $CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME
  only:
    - develop
  tags:
    - portal
```
上面的job，会使用到dockerfile，这个文件没有任何特别的要求，除了要求所使用的镜像文件，必须是镜像仓库里面已经存在的<br>
下面是一个范例，仅供参考

```
FROM 192.169.5.7:5000/nokia/tomcat:gmcc
EXPOSE 8080
ENV TZ=Asia/Shanghai
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
COPY run.sh /usr/local/run
COPY server.xml /usr/local/apache-tomcat-7.0.79/conf/server.xml
COPY *.war /usr/local/apache-tomcat-7.0.79/webapps/portal.war
RUN chmod +x /usr/local/run
```

#### 一个将镜像部署到swarm的示例
前面的job会生成一个可部署的镜像，并推送到镜像仓库中。<br>
下来要做的，是将写好的docker-compose.yml部署文件，推送到swarm主节点，并调用部署命令<br>
目前，我们有两个swarm，开发环境和预生产环境的swarm主节点为**app8**，生产环境的主节点为**app17**,这个一定注意不能混淆。<br>

```
dev_job_deploy:
  # 这是一个可以运行向docker swarm 主节点部署docker-compose配置文件的镜像
  image: $CI_REGISTRY/centos-ssh:1.2
  stage: dev_deploy

  script:
    # 将swarm主节点ip地址加入到容器的host文件中
    - echo "192.169.5.38   app8"  >> /etc/hosts
    # 改变文件属性为可读
    - chmod 777 /builds/gitlab/$CI_PROJECT_PATH/*
    # 创建对应的文件路径
    - ssh root@app8 "mkdir -p /home/warehouse/$CI_PROJECT_PATH/"
    # 复制文件到swarm 服务器
    - scp -r /builds/gitlab/$CI_PROJECT_PATH/dev-docker-compose.yml  root@app8:/home/warehouse/$CI_PROJECT_PATH/
    # 远程执行命令让镜像运行在swarm
    - ssh root@app8 "docker stack deploy -c /home/warehouse/$CI_PROJECT_PATH/dev-docker-compose.yml traefik-dev --with-registry-auth"
  only:
    #在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为portal的runner上运行本程序
    - portal
```
上面的job，默认你在project的根路径下有一个dev-docker-compose.yml部署文件，文件内容大概是下面这个样子。<br>
这个文件遵循标准的docker-compose文件规范，代表了相关镜像在实际运行时候的所有依赖环境配置。<br>
唯一要注意的是，这里面所使用的主容器的镜像文件，应该是前面编译好的镜像<br>
```
version: "3.3"
services:
  dev-portal-cicd:
    image: 192.169.5.7:5000/gdmcc_nokia/portal:develop
    networks:
      - traefik-net-dev
    extra_hosts:
      - "nqi.gmcc.net:10.201.50.226"
    deploy:
      placement:
        constraints:
          - node.role == worker
      labels:
        - "traefik.port=8080"
        - "traefik.backend=dev-portal-cicd"
        - "traefik.frontend.rule=Host:dev.gmcc.net;PathPrefix: /dev-portal-cicd/"
networks:
  traefik-net-dev:
    driver: overlay
    external: true
```
#### 代码测试
部署完以后,用robot框架进行功能验证性测试
```
dev_test_job1:
  image: $CI_REGISTRY/nokia/robot-rf:gmcc
  stage: dev_test
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/*.html
    - /builds/gitlab/$CI_PROJECT_PATH/*.xml
  #执行对应的自动测试脚本    
  script:
    - sh pybot_run.sh dev-portal
  only:
    - develop
  tags:
    - portal

```
### dev环境全过程的示例
**.gitlab-ci.yml** 文件
```
services:
  - name: docker:dind
    command: ["--insecure-registry=192.169.5.7:5000"]
before_script:
  - echo "begin script"
after_script:
  - echo "finished."
stages:
  - dev_build_nodejs
  - dev_build_source
  - dev_build_image
  - dev_deploy
  - dev_test
dev_job_nodejs:
  # 这里可以是你希望使用的任意镜像
  # 例如 $CI_REGISTRY/alpine，在build阶段用docker镜像就行
  image: $CI_REGISTRY/nokia/centos-node:gmcc1
  stage: dev_build_nodejs
  #让不同job直接都能访问使用这个路径下面的文件
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/code/web/dist/*

  script:
    #进入到代码目录
    - cd code/web
    #执行npm编译命令
    - cp -r /usr/local/node_modules  .
    - npm install -loglevel info
    - npm run builddevcov
  only:
    # 在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为app7的runner上运行本程序
    - portal
  
dev_job_maven:
  # 这里可以是你希望使用的任意镜像
  # 例如 $CI_REGISTRY/alpine，在build阶段用docker镜像就行
  image: $CI_REGISTRY/maven:3.3-jdk-8
  stage: dev_build_maven
  #让不同job直接都能访问使用这个路径下面的文件
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/code/target/*.war

  script:
    - source /etc/profile
    #进入到代码目录
    - cd code
    #执行maven编译命令
    - mvn clean package -P develop_test
  only:
    # 在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为app7的runner上运行本程序
    - portal
dev_job_image:
  # 这里可以是你希望使用的任意镜像
  # 例如 $CI_REGISTRY/alpine，在build阶段用docker镜像就行
  image: $CI_REGISTRY/docker:latest
  stage: dev_build_image
  script:
    - echo "Login $CI_REGISTRY"
    # 登陆docker远程镜像仓库
    - docker login -u "$CI_REGISTRY_USER" -p "$CI_REGISTRY_PASSWORD" "$CI_REGISTRY"
    # 用本项目的dockerfile制作镜像文件，以下地址为gitlab的Registry规范，最好不要修改
    - cp /builds/gitlab/$CI_PROJECT_PATH/code/target/*.war ./docker_build/
    # 使用dockerfile build镜像
    - docker build  -t $CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME ./docker_build/
    #上传镜像到 resgistry
    - docker push $CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME
  only:
    # 在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为portal的runner上运行本程序
    - portal

dev_job_deploy:
  image: $CI_REGISTRY/centos-ssh:1.2
  stage: dev_deploy
  script:
    - echo "1:$CI_COMMIT_REF_NAME,2:$CI_COMMIT_TAG,3:$CI_PROJECT_ID,4:$CI_PROJECT_NAME,5:$CI_PROJECT_PATH"
    - echo "192.169.5.47   app17"  >> /etc/hosts
    - echo "192.169.5.38   app8"  >> /etc/hosts
    - chmod 777 /builds/gitlab/$CI_PROJECT_PATH/*
    # 创建对应的文件路径
    - ssh root@app8 "mkdir -p /home/warehouse/$CI_PROJECT_PATH/"
    # 复制文件到swarm 服务器
    - scp -r /builds/gitlab/$CI_PROJECT_PATH/dev-docker-compose.yml  root@app8:/home/warehouse/$CI_PROJECT_PATH/
    # 远程执行命令让镜像运行在swarm
    - ssh root@app8 "docker stack deploy -c /home/warehouse/$CI_PROJECT_PATH/dev-docker-compose.yml traefik-dev --with-registry-auth"
  only:
    #在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为portal的runner上运行本程序
    - portal
    
dev_job_test:
  image: $CI_REGISTRY/nokia/robot-rf:gmcc
  stage: dev_test
  #让生成的文件可以在执行后下载
  artifacts:
    paths:
    - /builds/gitlab/$CI_PROJECT_PATH/*.html
    - /builds/gitlab/$CI_PROJECT_PATH/*.xml
  #执行对应的自动测试脚本    
  script:
    - sh pybot_run.sh dev-portal
  only:
    #在develop分支变化的时候触发运行
    - develop
  tags:
    # 在标签为portal的runner上运行本程序
    - portal
 

```
**robot-rf:gmcc dockerfile** 文件

```
FROM openshift/base-centos7:latest
MAINTAINER nokia-rf
RUN yum -y install epel-release
RUN yum -y install python-pip
RUN pip install pyvirtualdisplay selenium robotframework robotframework-selenium2library
RUN yum -y install firefox
RUN yum -y install Xvfb libXfont xorg-x11-fonts*
ADD  geckodriver  /usr/bin/geckodriver
RUN  chmod 777 /usr/bin/geckodriver
```

**docker-compose.yml** 文件

```
version: "3.3"
services:
  dev-portal-cicd:
    image: 192.169.5.7:5000/gdmcc_nokia/portal:dev
    networks:
      - traefik-net-dev
    extra_hosts:
      - "nqi.gmcc.net:10.201.50.226"
    deploy:
      placement:
        constraints:
          - node.role == worker
      labels:
        - "traefik.port=8080"
        - "traefik.backend=dev-portal-cicd"
        - "traefik.frontend.rule=Host:dev.gmcc.net;PathPrefix: /dev-portal-cicd/"
networks:
  traefik-net-dev:
    driver: overlay
    external: true
```
dev,pre,pro全环境的配置文件,可以参考gdmcc_nokia/portal 这个项目的配置

## 移动公司gitlab持续集成约定的规范
gitlab持续集成的使用是比较灵活的,但为了让各个项目更规范使用持续集成工具,我们在此约定一些使用规范,请各个项目一起遵照执行

### 文件命名以及目录树规范约定
在每个project下面,与持续集成相关的文件。
- **.gitlab-ci.yml**   放到项目 **根路径** 下
- **dockerfile**  以及制作镜像过程所需要的所有文件,放到  **./build_docker/**  路径下
- **docker-compose.yml** 放到项目 **根路径** 下,对应于dev,pre,pro三个环境,分别生成**dev-dockre-compose.yml**,**pre-dockre-compose.yml**,**pro-dockre-compose.yml**三种部署文件
- 测试相关的代码,都放在 **./test/** 路径下

### 镜像使用规范
- 所有的镜像名称,要以project名称:(develop/release/master) 来命名,例如 **gdmcc_nokia/portal** 项目, 对应的名称全部可以使用变量来实现
- 开发环境的镜像为**gdmcc_nokia/portal:develop**==$CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME
- 预生产环境镜像为**gdmcc_nokia/portal:release**==$CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME
- 生产环境的镜像为**gdmcc_nokia/portal:master**==$CI_REGISTRY/$CI_PROJECT_PATH:$CI_COMMIT_REF_NAME
- 镜像仓库已有的镜像名称,在本文档进行管理,如果需要增加其他镜像,请联系移动公司人员增加,不得自行加入
- 镜像的构建,必须通过写dockerfile的方式在现有镜像基础上构建,不得通过导入\导出\修改容器的方式.必须确保镜像可以随时重新编译
- http://registry.nqi.gmcc.net:8090  镜像仓库访问地址，开发厂家能在上面看镜像仓库是否已经有镜像

### swarm使用规范
目前有dev和pro两个swarm集群,不同集群的配置不同:如果是新的项目需要独立的network可以连接移动公司人员增加新的network
- dev: 对应的网络设置为 **traefik-net-dev**,对应的swarm主节点为 **app8**
- pro: 对应的网络设置为 **traefik-net-pro**,对应的swarm主节点为 **app17**   

### stages 和 job 命名规范
dev,pre,pro三个环境的部署,都统一写在一个.gitlab-ci.yml文件里面,如无特别需要,stages至少要包含以下十二个步骤(每个生产环境至少四个步骤):
- dev_build_nodejs
- dev_build_source
- dev_build_image
- dev_deploy
- dev_test
- pre_build_nodejs
- pre_build_source
- pre_build_image
- pre_deploy
- pre_test
- pro_build_nodejs
- pro_build_source
- pro_build_image
- pro_deploy
- pro_test

每个stage对应于一个或者多个job,命名方式为{$stage_name}_($job_name),例如 dev_build_source_job1, dev_build_source_job2 等.

### 源代码分支及触发条件规范
dev,pre,pro三个环境,对应于gitlab上面 develop,release,master三个分支,在每个分支代码commit以后,都会触发一次CI/CD的过程