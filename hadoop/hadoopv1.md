<1>
## 物理环境
1. host.99.tech
2. host.110.zbook

--------------------------
# hadoop cluster
--------------------------

## 207.centos7.vm
master
## 221.centos7.vm
slave1
## 222.centos7.vm
slave2
<-1>

<1>
# install.base

1. 免密登录
	master登录,所有slave
	所有slave登录master
	登录localhost

	ssh-keygen

2. 修改当前机器名称(所有机器)

	/etc/sysconfig/network

	hostnamectl set-hostname

	/etc/hosts
	# 追加
	192.168.1.207 master.Hadoop
	192.168.1.221 slave1.Hadoop
	192.168.1.222 slave2.Hadoop
	*注意: hosts中一定要有localhost*

3. 时间同步

4. jdk1.8安装

	wget http://www.ind3xing.com:8082/src/jdk/jdk-8u151-linux-x64.rpm
	export JAVA_HOME = /usr/java/jdk1.8.0_151

5. 关闭防火墙
	systemctl stop firewalld && systemctl disable firewalld
	selinux
	
<-1>

<1>
# hadoop.master

1. 下载,解压Hadoop 2.7.4
	wget http://www.ind3xing.com:8082/src/hadoop/hadoop-2.7.4.tar.gz
	tar -zxvf hadoop-2.7.4.tar.gz -C /home/
	ln -s /home/hadoop-2.7.4 /home/hadoop

2. 配置

_hadoop-env.sh_

	vim /home/hadoop/etc/hadoop/hadoop-env.sh
	export JAVA_HOME=/usr/java/jdk1.8.0_151

_core-site.xml_

	vi /home/hadoop/etc/hadoop/core-site.xml

	<configuration>
	    <property>
	        <name>fs.defaultFS</name>
	        <value>hdfs://master.hadoop:9000</value>
	    </property>
	    <property>
	        <name>hadoop.tmp.dir</name>
	        <value>/home/hadoop/tmp</value>
	    </property>
	</configuration>

_hdfs-site.xml_

	vi /home/hadoop/etc/hadoop/hdfs-site.xml

	<configuration>
	    <property>
	        <name>dfs.namenode.name.dir</name>
	        <value>/home/hadoop/data/name</value>
	    </property>
	    <property>
	        <name>dfs.datanode.data.dir</name>
	        <value>/home/hadoop/data/data</value>
	    </property>
	
	    <property>
	        <name>dfs.replication</name>
	        <value>1</value>
	    </property>

	    <property>
	        <name>dfs.secondary.http.address</name>
	        <value>master.hadoop:50090</value>
	    </property>
	</configuration>

_mapred-site.xml_

	vi /home/hadoop/etc/hadoop/mapred-site.xml
	
	<configuration>
	    <property>
	        <name>mapreduce.framework.name</name>
	        <value>yarn</value>
	    </property>
	</configuration>

_yarn-site.xml_

	vi /home/hadoop/etc/hadoop/yarn-site.xml

	<configuration>
	    <property>
	        <name>yarn.resourcemanager.hostname</name>
	        <value>master.hadoop</value>
	    </property>

	    <property>
	        <name>yarn.nodemanager.aux-services</name>
	        <value>mapreduce_shuffle</value>
	    </property>
	</configuration>

<-1>

<1>
# slave安装

1. master主机上
	/home/hadoop/etc/hadoop/slaves
	slave1.hadoop
	slave2.hadoop
	*追加机器名*

2. 安装所有slave机器

	scp -r /home/hadoop root@192.168.1.221:/home/
	scp -r /home/hadoop root@192.168.1.222:/home/

<-1>

<1>
# 环境综合

1. 修改环境变量(所有机器)
	vim /etc/profile

	export HADOOP_HOME=/home/hadoop
	export PATH=$PATH:$HADOOP_HOME/bin

	source /etc/profile
	*生效*

2. 初始化HDFS
	/home/hadoop/bin/hadoop namenode -format

3. 启动集群
	/home/hadoop/sbin/start-all.sh

4. 测试
	/home/hadoop/bin/hadoop jar /home/hadoop/share/hadoop/mapreduce/hadoop-mapreduce-examples-2.7.4.jar pi 5 10

5. web
	http://master.hadoop:8088/
	
<-1>

<1>
# maintence

## format

1. cluster stop
	/home/hadoop/sbin/stop-all

2. clear
	rm -rf /home/hadoop/tmp
	rm -rf /home/hadoop/data/

## web
	http://master.hadoop:8088/proxy/application_1512554675715_0001/

<-1>