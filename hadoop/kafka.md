<1>
# -----------------------------------
# zookeeper 安装
# -----------------------------------

*由于,storm不使用zk作消息传输(仅传递控制),可以设计一个单节点的,zk集群*
*也可以设计多个节点的,zk集群,在每个节点上完成以下操作*

## 下载,解压

	wget http://mirrors.hust.edu.cn/apache/zookeeper/stable/zookeeper-3.4.12.tar.gz
	tar -zxvf zookeeper-3.4.6.tar.gz
	
	mkdir /data
	mv zookeeper-3.4.6 /data/zookeeper
	cd /data/zookeeper/conf/
	mv zoo_sample.cfg zoo.cfg

## 配置

1. /etc/profile

	vim /etc/profile
	export ZOOKEEPER_HOME=/data/zookeeper
	export PATH=$PATH:$JSTORM_HOME/bin:$ZOOKEEPER_HOME/bin
	CLASSPATH=$ZOOKEEPER_HOME/lib

	source /etc/profile

2. zoo.cfg

	cd $ZOOKEEPER_HOME/conf
	cp zoo_sample.cfg zoo.cfg
	
	------------------------------
	*zoo.cfg内容如下*
	------------------------------
		
	# The number of milliseconds of each tick
	tickTime=2000
	#达成一致状态的时间 
	initLimit=10
	#同步时间
	syncLimit=5
	#快照日志
	dataDir=/data/zookeeper/work
	#事物日志,不配置存放在快照日志
	#dataLogDir=xxxx 
	*数据文件目录*

	clientPort=2181
	server.1=192.168.1.201:2888:3888
	server.2=192.168.1.202:2888:3888
	server.3=192.168.1.203:2888:3888

	*server.id 启动id 保存在,dataDir目录下的myid文件*
	*2888:3888 分别是: 连接leader的端口,leader选举的端口*

		>server.A=B：C：D：
		>A 是一个数字,表示这个是第几号服务器;
		>B 是这个服务器的 ip 地址;
		>C 表示的是这个服务器与集群中的 Leader 服务器交换信息的端口；
		>D 表示的是万一集群中的 Leader 服务器挂了，需要一个端口来重新进行选举，选出一个新的 Leader，而这个端口就是用来执行选举时服务器相互通信的端口.

3. myid

	mkdir /data/zookeeper/work/
	echo "1" > /data/zookeeper/work/myid
	*注意所有机器,都需要进行上述操作*	

## 相关端口
	2181
	2888
	3888

## 启动与检测

1. 启动server
	*所有机器*
	nohup /data/zookeeper/bin/zkServer.sh start &

2. 检测客户端
	
	/data/zookeeper/bin/zkCli.sh
	>ls /
	
3. 查看zookeeper的角色
	*所有机器*
	/data/zookeeper/bin/zkServer.sh status

4. 测试连接
	/data/zookeeper/bin/zkCli.sh -server 192.168.1.204:2181

<-1>

<1>
# --------------------------------------------
# kafka.host安装
# --------------------------------------------
*kafka不适合直接运行在 marathon中,但是可运行在,mesos上*

1. 首先安装zookeeper

## 下载

wget  http://mirror.bit.edu.cn/apache/kafka/2.0.0/kafka_2.11-2.0.0.tgz 

## 解压
	
	tar -zxvf kafka_2.10-0.8.1.1.tgz -C /opt
	ln -s /opt/kafka_2.10-0.8.1.1 /opt/kafka

	chown -R kafka:kafka /opt/kafka /opt/kafka_2.10-0.8.1.1
	*可选*	

## 配置
	vi /opt/kafka/config/server.properties

```yaml
	broker.id=1
	port=9092
	log.dirs=/opt/kafka/tmp
	host.name=HDP125
	zookeeper.connect=HDP125:2181,HDP126:2181,HDP127:2181
```

## 启动
	bin/kafka-server-start.sh config/server.properties
	bin/zookeeper-server-start.sh config/zookeeper.properties
	*启动zookeeper*
	*如果zk是独立安装,则独立启动*

	jps
	*查看进程*

## 停止
	bin/kafka-server-stop.sh
	bin/zookeeper-server-stop.sh

## 测试
	bin/kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 3 --partitions 1 --topic test
	*注意副本数*
	bin/kafka-topics.sh --list --zookeeper localhost:2181
	*查看,topic列表*

	bin/kafka-console-producer.sh --broker-list localhost:9092 --topic test
	bin/kafka-console-consumer.sh --zookeeper localhost:2181 --topic test --from-beginning
	bin/kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic test --from-beginning
<-1>
