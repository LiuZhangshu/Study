# REDIS
## 1.Nosql

### nosql数据库分类

```
[key]-value（快速查询；缺少数据格式化）,
列存储数据库（查找速度快，可扩展性强，更容易进行分布式扩展），
文档型数据库（数据结构要求低；查询性能不高，缺乏统一的查询语法），
图形数据库（利用图结构相关算法；需要对整个图做计算得出结果，不容易做分布式）
```

### 特点

```
易扩展
高可用
高性能
灵活的数据模型
```

## 2.redis介绍

定义:内存数据库

应用场景
```
缓存
任务队列
网站访问统计
数据过期处理
分布式集群架构中session分离
```

## 3.redis安装、使用

### 安装流程

```
0.官网下载redis安装包
1.tar -zxvf redis-4.0.11.tar.gz
2.make
3.make PREFIX=/usr/local/redis-4.0.11 install
```

### 目录结构

```
redis-benchmark		#redis性能测试工具
redis-check-aof		#aof文件修复工具
redis-check-rdb		#rdb文件检查
redis-cli			#客户端
redis-sentinel
redis-server		#redis启动
redis.conf			#配置文件
```

### 配置文件

```
daemonize yes   #yes默认后端启动
protected no	#设置保护模式，如果设置为yes，那么只能从主机登录
```

### redis服务操作

```shell
服务启动
sudo ./bin/redis-server ./redis.conf 
服务停止
sudo ./bin/redis-cli shutdown
客户端连接
sudo ./bin/redis-cli
```

### redis命令


#### 通用命令
```shell
ping 测试是否连通
查找所有key
	keys *
查看某些key
	keys my?
删除key
	del [key]
查看是否存在
	exists [key]
重命名
	rename [old name] [new name ]
设置过期时间
	expire [key] [set_time]
查看剩余时间
	ttl [key]
查看key类型
	type [key]

	
```

## 4.jedis连接与基本操作

```java
import org.junit.Test;
import redis.clients.jedis.Jedis;
import redis.clients.jedis.JedisPool;
import redis.clients.jedis.JedisPoolConfig;

/**
 * Jedis test
 * @author LiuZhangshu
 */
public class JedisDemo1 {
    /**
     * single example test
     */
    @Test
    public void demo1(){
        //1.set ip and port
        Jedis jedis = new Jedis("192.168.182.129", 6379);
        //2. save data
        jedis.set("name","hello");
        //3.get data
        String value = jedis.get("name");
        System.out.println(value);
        //4.release sources
        jedis.close();
    }
    @Test
    /**
     * use connect pool
     */
    public void demo2(){
        //get connect-pool's conf object
        JedisPoolConfig config = new JedisPoolConfig();
        //set max connection number
        config.setMaxTotal(30);
        //set max idle connection number
        config.setMaxIdle(10);
        //get connect pool
        JedisPool jedisPool = new JedisPool(config,"192.168.182.129",6379);
        //get core obj
        Jedis jedis = null;
        try{
            // get connection by pool
            jedis = jedisPool.getResource();
            jedis.set("name","kk");
            String value = jedis.get("name");
            System.out.println(value);
        }catch (Exception e){
            e.printStackTrace();
        }finally {
            if(jedis!=null){
                jedis.close();
            }
            if(jedisPool!=null){
                jedisPool.close();
            }
        }

    }
}
```

## 5.redis数据结构

### 数据类型

#### 字符串（String）
特点
```
二进制安全，存入和取出的数据相同

value最多可以存储数据长度为512M
```
常用命令
```
赋值	
	set	[key] value
取值	
	get	[key]
先获取再赋值	
	getset	[key]
删除	
	del [key]
数值增减	
	incr [key]	(指定[key] value+1,返回value)	
	decr [key]	(指定[key] value-1,返回value)
扩展命令	
	incrby [key] step	（指定[key] value增加步长,返回value）		
	decrby [key] step	（指定[key] value减少步长,返回value）
	append [key] str	（指定[key] value后拼接str，返回value长度


```



#### 哈希（hash）

特点

```
String [key]和String value的map容器
每一个hash可以存储4294967295个键值对
```
命令
```
赋值
	hset [hashkey] [key] value 
	hmset [hashkey] [key1] value1 [key2] value2  .....

取值
	hget [hashkey] [key]
	hmget [hashkey] [key1] [key2] .......
	hgetall [hashkey]					(获取所有属性和值)

删除
	hdel [hashkey] [key1] [key2] ........	(删除）
	
扩展命令	
	hincrby [hashkey] [key] step(指定[key] value增加步长,返回value)		

	
判断[key]是否存在
	hexists [hashkey] [key]	(返回布尔值)

获取[key]数量
	hlen [hashkey]	(返回[key]个数)
获取所有属性名称
	hkeys [hashkey]
获取所有属性的值
	hvals [hashkey]
```

#### 字符串列表(list)

命令：
```
两端添加
	返回value长度
	左侧
	lpush [key] [element1] [element2] ...... [elementn]
	右侧
	rpush [key] [element1] [element2] ...... [elementn]
	
查看
	标签可以为负数，负数为倒着数
	lrange [key] [start index] [end index] 
	
弹出
	lpop [key] 返回并删除第一个元素
	rpop [key] 返回并删除最后一个元素
	
获取元素个数
	llen [key]
	
数据插入
	lpushx [key] [value] 头部添加元素
	
元素删除
	lrem [key] [count] [value] count为正数，从头开始删除|count|个值为value的元素;count为负数，从尾到头删除|count|个值为value的元素
元素插入 
	lset [key] [index] [value]
	linsert [key] before [exist value] [new value]
	linsert [key] after [exist value] [new value]
弹出并压入
	rpoplpush [raw key] [result key] 

```

#### 字符串集合（set）

不可以出现重复元素

命令：

```
添加
sadd [key] [element1] [ element2] ..... [elementn]

删除
srem [key] [value]

查看
smemners [key] [value] 存在返回1，不存在返回0
	
集合差集运算
	sdiff key1 key2   返回1中存在2中不存在的元素
集合并集预算
	sunion key1 key2  返回并集
	
元素个数统计
	scard [key] 返回元素个数
	
随机返回成员
	srandmember [key] 
存储差集到新集合
	sdiffstore [new] [key1] [key2]
存储交集到新集合
	sinsterstore [new] [key1] [key2]
并集存储
	sunionstore  [new] [key1] [key2]
  
```

#### 有序字符串集合 sorted-set

特点：成员在集合中是有序的

应用：游戏排名，热点话题等

命令：
```
添加元素
	zadd [key] [score] [element]
获取分数
	zscore [key] [element]
查看元素个数
	zcard [key]
删除
	zrem [key] [element]
范围删除
	zremrangebyrank [key]  [start index] [end index] 	
	zremrangebyscore [key] [min] [max]
范围查找
	zrange [key] [start index] [end index] 	返回下标范围内元素（从小到大）
	zrange [key] [start index] [end index] withscores	返回下标范围内元素和分数（从小到大）
	zrevrange [key] [start index] [end index] withscores	返回下标范围内元素和分数（从大到小）
增加指定成员
	zincrby [key] step [member]
返回分数区间内总个数
	zcount [key] [min] [max]
	
```



### [key]定义的注意点

不要太长（1024字节以内）

统一命名规范


##6.redis 特性

多数据库（最多16个）  
```
选择数据库
	select index
移动key到新数据库
	move key database_index

```
支持事物
```
multi
	开启事物 
exec
	提交
discard
	回滚
```

## 7.redis的持久化

持久化方式：
```
rdb：制定时间内，将数据写入磁盘
aof：以日志的形式记录操作
无持久化：缓存
aof+rdb
```

### RDB

优势：只包含一个文件，便于灾难恢复；性能最大化，初始化进程快，启动快

缺点：周期内可能宕机；数据集大的时候，运算大

配置：
```
conf:
save 900 1		## 900s 存数一次
save 300 10		## 300s 发生10个key的变化存储一次
save 60 10000   ## 60s 10000key 存储一次

dbfilename dump.rdb	## 存储文件名
dir ./				## 文件路径
```

### AOF

优点：同步修改写入磁盘，数据安全；append方式写日志；格式清晰，易于理解

缺点：效率低

配置：
```
appendonly no				##是否开启
appendfilename "appendonly.aof"		##日志文件名称
appendfsync always			##同步频率
```





