# Python
## 一、注释
	单行注释 #
	多行注释 '''text'''
	指定中文字符集(必须在程序开始前声名)	#coding=utf-8

## 二、变量
2.1变量的定义
	变量名=变量值	
	例子
	a=9
	a=9.0
	a="hello"
	a='h'
	a,b,c=1,2,3
	（python为动态语言，定义变量无需指定变量类型，编译时会做解释。如，a=8那么a为int型；a=8.0那么a为float型）
2.2变量类型获取
	type（var_name）#返回变量var_name的类型
	
## 三、输出和输入
### 3.1print
	print ("output text") #输出字符串
	print ("result is :%s%s%d"%(var1,var2,var3)) #输出字符串和变量
	输出可以使用\t \n等制表符，如果需要打印\t 需要\转义
### 3.2input
	var=input("说明内容") #默认输入为字符串，python2中可以直接计算输入内容，出于安全考虑，python3将该特性删除

## 四、运算符与变量类型转换
### 4.1运算符
	+ 、-、*、/ ：加减乘除四则运算
	//	:除法，结果取整数部分
	%	:除法，取余数
	!=和<>	:不等于
	<、>	：小于、大于
	**	：指数运算
	
### 4.2类型转换
	int(var)
	float(var)

## 五、流程控制语句和循环语句
### 5.1 流程控制语句
	python中使用缩紧来控制程序段归属，condition为0相当于false，condition为大于0的数，相当于true
	
	if condition1 ：
	    sentence1
	elif condition2 :
	    sentence2
	else :
		sentence3
		
### 5.2循环语句
#### 5.2.1 range()
	range(5) #生成数列[1,2,3,4,5]
	
	range(min,max,step) #设置步长和起止数
	range(3,9,2)	#生成[3,5,7]
	
#### 5.2.2 for
	
	for i in list :
	    sentence

	嵌套：
	cities =[["a","v"],["d","c"]]
	for i in cities :
		for j in i :
			print (j)
    
	利用range()实现记数
	for i in rang(10)
		print (i)

#### 5.2.3 while
	while condition :
		sentence
	
## 六、集合
### 6.1 list
	1.定义
		a=[]
		
	2.添加元素
		a.append(value)
		
	3.调用
		a[index]	#index 从0开始，-1代表倒数第一个元素的索引
		
	4.查看长度
		len(list_name)
	
	5.切片
		a[2:4]	#取索引2、3的内容，返回一个list类型结果
		
	6.删除
		a.pop(index)，返回删除的元素
	7.插入
		a.insert(index,value)
	8.查看元素是否存在于集合
		if "value" in  list_name
			sentence
		
### 6.2 dict 字典
	1.定义
	score={}
	score={"a":5,"b":10,"c":34}
	2.赋值
	score[key]=value
	3.调用
	score[key] #返回value
	4.返回所有内容
	score.keys()
	5.查看key
	if "a" in score 
		sentence

## 七、文件读写
### 7.1文件读取
	f=open("filepath"，"r")	#打开文件并开启读取,如果filepath不存在则创建
	g=f.read()	#读取文件内容，并传给变量g
	f.close()		#关闭文件
### 7.2文件写入
	f=open("filepath","w")	#以写权限打开文件
	f.write("text")	#写text到文件，覆盖之前内容
	f.close()
## 八、函数
	定义
	def 函数名（参数列表）：
		函数体
		return 内容
		
	调用
	函数名（参数列表）
