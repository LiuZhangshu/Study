# docker registry build

## part1：基于registry建立私有hub

### 1.拉取registry镜像

命令：

```shell
docker pull  docker.io/registry
```

例子：

```shell
[root@master ~]# docker pull  docker.io/registry   
Using default tag: latest
Trying to pull repository docker.io/library/registry ... 
latest: Pulling from docker.io/library/registry
d6a5679aa3cf: Pull complete 
ad0eac849f8f: Pull complete 
2261ba058a15: Pull complete 
f296fda86f10: Pull complete 
bcd4a541795b: Pull complete 
Digest: sha256:5a156ff125e5a12ac7fdec2b90b7e2ae5120fa249cf62248337b6d04abc574c8
```

### 2.建立registry容器

命令：

```shell
docker run -d -p 5000:5000 --restart=always --name registry registry
```

例子：

```shell 
[root@master ~]# docker run -d -p 5000:5000 --restart=always --name registry registry
9c8ec0d91783ca33559408878a928e69dd96de01dc9d582baf953e255fb9a76b

```

默认情况下，仓库会被创建在容器的 /var/lib/registry中；可以加-v参数映射到本地存储目录

## part2：私有仓库操作

```
以下流程演示将本地镜像推入私有仓库；从私有仓库取镜像
```

### 1.查看本地镜像

命令：

```shell
docker images
```

例子：

```shell
[root@master ~]# docker images
REPOSITORY           TAG                 IMAGE ID            CREATED             SIZE
docker.io/registry   latest              2e2f252f3c88        7 weeks ago         33.29 MB
elastic.furious      0.0.1               7345fabab81a        9 months ago        951.1 MB
elastic.base         0.0.1               16ce66ab7886        9 months ago        854.4 MB
```

### 2.标记本地镜像

使用 docker tag 将 elastic.base:0.0.1 这个镜像标记为 127.0.0.1:5000/elastic.base:0.0.1

格式为 docker tag IMAGE[:TAG] [REGISTRY_HOST[:REGISTRY_PORT]/]REPOSITORY[:TAG]

命令：
```shell
docker tag elastic.base:0.0.1 127.0.0.1:5000/elastic.base:0.0.1

```

### 3.上传标记镜像

命令：

```
docker push 127.0.0.1:5000/elastic.base:0.0.1
```

例子：

```
[root@master ~]# docker push 127.0.0.1:5000/elastic.base:0.0.1
The push refers to a repository [127.0.0.1:5000/elastic.base]
e1fb7216c760: Pushed 
f1e9c2c72bf4: Pushed 
1e0397d610ec: Pushed 
de5bed407c21: Pushed 
337ae2979151: Pushed 
98c921cd6526: Pushed 
2f887a45dffb: Pushed 
0727adfa20ab: Pushed 
4ecb050ac65c: Pushed 
85f796bdf7c8: Pushed 
6ec69f6c7c67: Pushed 
5f70bf18a086: Pushed 
74e254638f75: Pushed 
0.0.1: digest: sha256:8118e0bca57ebf533b137ee2abab62c8edb56d96804201f54c36d5a8a88bfa41 size: 3263
```

### 4.查看私有仓库中镜像

命令：

```
 curl 127.0.0.1:5000/v2/_catalog
```

例子：

```
[root@master ~]# curl 127.0.0.1:5000/v2/_catalog
{"repositories":["elastic.base"]}
```

### 5.下载仓库镜像

命令：

```
docker pull 127.0.0.1:5000/elastic.base:0.0.1
```

例子：

```
[root@master ~]# docker pull 127.0.0.1:5000/elastic.base:0.0.1
Trying to pull repository 127.0.0.1:5000/elastic.base ... 
0.0.1: Pulling from 127.0.0.1:5000/elastic.base

4f4fb700ef54: Pull complete 
b6eb2ef2f7d0: Pull complete 
f05881576cd4: Pull complete 
38c91bc4f0bc: Pull complete 
fa32d7ade4d9: Pull complete 
d25e4d0c33e9: Pull complete 
c9001d3563dc: Pull complete 
13ff24757b43: Pull complete 
473c12bdb384: Pull complete 
9f3c0b22d514: Pull complete 
2c1f98746515: Pull complete 
701309890193: Pull complete 
f9191478f8a3: Pull complete 
Digest: sha256:8118e0bca57ebf533b137ee2abab62c8edb56d96804201f54c36d5a8a88bfa41
```

