# docker
## docker容器创建
	docker run -t -i -v [实际物理路径]:[挂载点] cs68.java.crond.gcc:0.0.1 /bin/bash
	docker run -i -t [REPOSITORY]:[tag] [command which run after docker run ]
		-i 允许你对容器内的标准输入 (STDIN) 进行交互。
		-t 在新容器内指定一个伪终端或终端。
		-v 挂载目录
		-d 将容器放到后台运行
		-P 将服务器内部端口映射到主机上
		-p [主机端口]:[容器端口] 端口映射

## 查看images		
	docker images

## 退出容器
	ctl+p+q

## docker停止
	docker stop [CONTAINER ID] 
## 镜像下载
	docker pull [images name]
## 镜像查找
	docker search [images name]
## 运行中的容器查看
	docker ps
## 连接到容器
	docker attach [CONTAINER ID] 
## 启动停止容器
	docker start [CONTAINER ID]
	ctl + pq
## 删除容器
	docker rm [CONTAINER ID]
## 删除images
	docker rmi <image id>
## 查看容器log
	docker logs [CONTAINER ID]
## 查看容器运行状态
	docker stat [CONTAINER ID]
## 执行命令
	docker exec -it  [CONTAINER ID] [cmd]
## 新建镜像
	step1 编辑 Dockerfile 
		example：
			FROM    centos:6.7
			MAINTAINER      Fisher "fisher@sudops.com"
			
			RUN     /bin/echo 'root:123456' |chpasswd
			RUN     useradd runoob
			RUN     /bin/echo 'runoob:123456' |chpasswd
			RUN     /bin/echo -e "LANG=\"en_US.UTF-8\"" >/etc/default/local
			EXPOSE  22
			EXPOSE  80
			CMD     /usr/sbin/sshd -D
		FROM 建立镜像基础
		RUN 执行的命令
	step2 建立docker镜像
		docker build -t  [REPOSITORY]:[tag] [Dockerfile Path]
		
## 镜像导出，导入
	 docker export  [CONTAINER ID]  > [filename]
	 cat ubuntu.tar | sudo docker import - [REPOSITORY]:[tag]
	 docker save [REPOSITORY]:[tag] > filename
	 docker load <filename


## 常见错误排查

docker无法启动：修改option选项 selinux修改为false
```shell
[root@ices dockerRpm]# vi /etc/sysconfig/docker

# /etc/sysconfig/docker

# Modify these options if you want to change the way the docker daemon runs
OPTIONS='--selinux-enabled=false --log-driver=journald --signature-verification=false'
if [ -z "${DOCKER_CERT_PATH}" ]; then
    DOCKER_CERT_PATH=/etc/docker
fi

# Do not add registries in this file anymore. Use /etc/containers/registries.conf
# instead. For more information reference the registries.conf(5) man page.

# Location used for temporary files, such as those created by
# docker load and build operations. Default is /var/lib/docker/tmp
# Can be overriden by setting the following environment variable.
# DOCKER_TMPDIR=/var/tmp

# Controls the /etc/cron.daily/docker-logrotate cron job status.
# To disable, uncomment the line below.
# LOGROTATE=false

# docker-latest daemon can be used by starting the docker-latest unitfile.
# To use docker-latest client, uncomment below lines
#DOCKERBINARY=/usr/bin/docker-latest
#DOCKERDBINARY=/usr/bin/dockerd-latest
#DOCKER_CONTAINERD_BINARY=/usr/bin/docker-containerd-latest
#DOCKER_CONTAINERD_SHIM_BINARY=/usr/bin/docker-containerd-shim-latest
```