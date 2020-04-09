## 依赖环境安装
	yum -y install libboost_program_options.so*	（mariadb依赖环境）
	createrepo	（rpm建立本地yum源命令）
## 数据库
	不要安装文档中10版本，10版本和mariadb-libs-5.5.56-2.el7.x86_64冲突。然而mariadb-libs-5.5.56-2.el7.x86_64如果确实无法安装agent
	建议通过  yum -y install mariadb-server 安装
## JDBC：
	建议每台服务器都安装
##时间同步
	如果ntp和chrony未能配置成功。集群内机器时间不同步会导致hbase无法启动。临时解决方案是手动设置时间，方法如下
	step1：选择时区
		tzselect
	step2：设置时间
		date -s 00:00:00
		
		
## 注意事项：
	1.cm的server启动比较慢，不要反复输入启动命令，否则会导致mac变更
	2.修改虚拟内存比例，安装服务前会检查环境，最好修改	
		echo 'vm.swappiness=10'>> /etc/sysctl.conf
		sysctl vm.swappiness=10
	3.禁止透明大页内存
		以下内容写入~/.bashrc
		if test -f /sys/kernel/mm/transparent_hugepage/enabled; then
		   echo never > /sys/kernel/mm/transparent_hugepage/enabled
		fi
		if test -f /sys/kernel/mm/transparent_hugepage/defrag; then
		   echo never > /sys/kernel/mm/transparent_hugepage/defrag
		fi 
		立即生效：
		echo never > /sys/kernel/mm/transparent_hugepage/defrag
		echo never > /sys/kernel/mm/transparent_hugepage/enabled

	4.如果 metastore未启动成功，则hive无法使用；启动方法如下
		hive --service metastore &
	