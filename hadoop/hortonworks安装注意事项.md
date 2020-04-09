##0 流程
http://www.cnblogs.com/tgzhu/p/5742509.html
## 1.httpd master 装就可以

## 2.数据库配置（mysql安装完成后）

```shell
[root@master hdp]# mysql_secure_installation

NOTE: RUNNING ALL PARTS OF THIS SCRIPT IS RECOMMENDED FOR ALL MySQL
      SERVERS IN PRODUCTION USE!  PLEASE READ EACH STEP CAREFULLY!


In order to log into MySQL to secure it, we'll need the current
password for the root user.  If you've just installed MySQL, and
you haven't set the root password yet, the password will be blank,
so you should just press enter here.

Enter current password for root (enter for none): 
OK, successfully used password, moving on...

Setting the root password ensures that nobody can log into the MySQL
root user without the proper authorisation.

Set root password? [Y/n] Y
New password: 
Re-enter new password: 
Password updated successfully!
Reloading privilege tables..
 ... Success!


By default, a MySQL installation has an anonymous user, allowing anyone
to log into MySQL without having to have a user account created for
them.  This is intended only for testing, and to make the installation
go a bit smoother.  You should remove them before moving into a
production environment.

Remove anonymous users? [Y/n] Y
 ... Success!

Normally, root should only be allowed to connect from 'localhost'.  This
ensures that someone cannot guess at the root password from the network.

Disallow root login remotely? [Y/n] n
 ... skipping.

By default, MySQL comes with a database named 'test' that anyone can
access.  This is also intended only for testing, and should be removed
before moving into a production environment.

Remove test database and access to it? [Y/n] n
 ... skipping.

Reloading the privilege tables will ensure that all changes made so far
will take effect immediately.

Reload privilege tables now? [Y/n] Y
 ... Success!

Cleaning up...



All done!  If you've completed all of the above steps, your MySQL
installation should now be secure.

Thanks for using MySQL!
```

## 3.repo文件制作（复制到所有机器的/etc/yum.repos.d/下）
```
[root@master nokia]$ sudo vim /etc/yum.repos.d/ambari.repo
[ambari]
name=ambari
baseurl=http://192.168.171.130/MyResource/Hortonworks/ambari/centos7/
enabled=true
gpgcheck=1
gpgkey=http://192.168.171.130/MyResource/Hortonworks/ambari/centos7/RPM-GPG-KEY/RPM-GPG-KEY-Jenkins
[root@master nokia]$ sudo yum repolist

[root@master nokia]$ sudo vim /etc/yum.repos.d/HDP.repo
[HDP]
name=HDP-2.6.0.3
baseurl=http://192.168.171.130/MyResource/Hortonworks/HDP/centos7/
enabled=true
gpgcheck= 1
gpgkey=http://192.168.171.130/MyResource/Hortonworks/HDP/centos7/RPM-GPG-KEY/RPM-GPG-KEY-Jenkins
[root@master nokia]$ sudo yum repolist


[root@master nokia]$ sudo vim /etc/yum.repos.d/HDP-UTILS.repo
[HDP-UTILS]
name=HDP-UTILS-1.1.0.21
baseurl=http://192.168.171.130/MyResource/Hortonworks/HDP-UTILS/
enabled=true
gpgcheck=1
gpgkey=http://192.168.171.130/MyResource/Hortonworks/HDP-UTILS/RPM-GPG-KEY/RPM-GPG-KEY-Jenkins
[root@master nokia]$ sudo yum repolist


## 4.导入ambari安装包的key（yum -y install ambari前）
 rpm --import http://192.168.171.130/ambari/centos7/RPM-GPG-KEY/RPM-GPG-KEY-Jenkins 

## 5.ambari-server setup（ambari-server start 前）
[root@master ~]# ambari-server setup
Using python  /usr/bin/python
Setup ambari-server
Checking SELinux...
SELinux status is 'disabled'
Customize user account for ambari-server daemon [y/n] (n)? y
Enter user account for ambari-server daemon (root):root
Adjusting ambari-server permissions and ownership...
Checking firewall status...
Checking JDK...
[1] Oracle JDK 1.8 + Java Cryptography Extension (JCE) Policy Files 8
[2] Oracle JDK 1.7 + Java Cryptography Extension (JCE) Policy Files 7
[3] Custom JDK
==============================================================================
Enter choice (1): 3
WARNING: JDK must be installed on all hosts and JAVA_HOME must be valid on all hosts.
WARNING: JCE Policy files are required for configuring Kerberos security. If you plan to use Kerberos,please make sure JCE Unlimited Strength Jurisdiction Policy Files are valid on all hosts.
Path to JAVA_HOME: /usr/java/jdk1.8.0_11
Validating JDK on Ambari Server...done.
Completing setup...
Configuring database...
Enter advanced database configuration [y/n] (n)? y
Configuring database...
==============================================================================
Choose one of the following options:
[1] - PostgreSQL (Embedded)
[2] - Oracle
[3] - MySQL / MariaDB
[4] - PostgreSQL
[5] - Microsoft SQL Server (Tech Preview)
[6] - SQL Anywhere
[7] - BDB
==============================================================================
Enter choice (1): 3
Hostname (localhost): 192.168.171.130            
Port (3306): 
Database name (ambari): 
Username (ambari): 
Enter Database Password (bigdata): 
Configuring ambari database...
Copying JDBC drivers to server resources...
Configuring remote database connection properties...
WARNING: Before starting Ambari Server, you must run the following DDL against the database to create the schema: /var/lib/ambari-server/resources/Ambari-DDL-MySQL-CREATE.sql
Proceed with configuring remote database connection properties [y/n] (y)? y
Extracting system views...
ambari-admin-2.5.0.3.7.jar
...........
Adjusting ambari-server permissions and ownership...
Ambari Server 'setup' completed successfully.
[root@master ~]# chmod 777 /usr/share/java/mysql-connector-java.jar 
[root@master ~]# ambari-server setup --jdbc-db=mysql --jdbc-driver=/usr/share/java/mysql-connector-java.jar
```

6.私钥查看方法（只需输入子节点）
cat /root/.ssh/id_rsa

-------------------------------------------------------------------------------------------------------

7. Hive Metastore节点需要放在有数据库的服务器

8.设置dfs.permissions.enabled=false，否则无法使用hive
Ambari WebUI Dashboard/HDFS/Configs/Advanced/Advanced hdfs-site/设置dfs.permissions.enabled=false，然后重启受到影响的服务。
9.如果hive无法启动，则关掉tez

10.重启heartbeat lost问题解决
在python 2.7.5及以上版本时，增加了certificate verification，正是因为这个出了问题导致ambari agent无法连接server，出现heartbeat lost。三台全改
vi /etc/python/cert-verification.cfg
 [https] 
verify=disable

11.


## 用户名 密码

| application | user | password |
| ----------- | ---- | -------- |
| mysql  | root | fast*123 |
|| ambari | bigdata |
|| hive | bigdata |
| ambari | admin | admin |




hdp下载地址(迅雷会员下载挺快的)
```
http://public-repo-1.hortonworks.com/ambari/centos7/2.x/updates/2.5.0.3/ambari-2.5.0.3-centos7.tar.gz
http://public-repo-1.hortonworks.com/HDP/centos7/2.x/updates/2.6.0.3/HDP-2.6.0.3-centos7-rpm.tar.gz
http://public-repo-1.hortonworks.com/HDP-UTILS-1.1.0.21/repos/centos7/HDP-UTILS-1.1.0.21-centos7.tar.gz
```
mysql下载地址
```
https://cdn.mysql.com//Downloads/MySQL-5.5/mysql-5.5.60-linux-glibc2.12-x86_64.tar.gz

https://cdn.mysql.com//Downloads/MySQL-5.5/MySQL-5.5.60-1.el7.x86_64.rpm-bundle.tar
```
java下载地址
```
https://download.oracle.com/otn-pub/java/jdk/8u191-b12/2787e4a523244c269598db4e85c51e0c/jdk-8u191-linux-x64.rpm?AuthParam=1544062125_ef0eaf540cb0ddaf09b15274bb3fc097
```


centOS7 下载地址
```
http://120.198.248.29/cache/mirrors.163.com/centos/7.5.1804/isos/x86_64/CentOS-7-x86_64-DVD-1804.iso?ich_args2=916-27112910064484_a2ec339c800a0f4f8ad7cd6fc9c42347_10012308_9c89602fd5cbf8d2903e518939a83798_ed400ca0d5ef8642a2f37668c1c473a1
```