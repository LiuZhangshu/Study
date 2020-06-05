# c语言
## 数据类型
* 基本类型
```c
int 
char 
float 
double 
_Bool 
enum 
long int 
long long int 
```
* 指针类型

* 构造类型
数组 结构 联合
* sigined unsigned
```c
print("%u",unsigend_num)
```
* 运算符
sizeof :
```c
sizeof(object)
sizeof(type_name)
sizeof object
```

## 变量和常量

* 常量:
```c
#define 标识符 常量
```
* printf:
```c
print("%s,%d","s",int a=8)
```
* 字符串常量
结束位置：\0 , 空字符  
字符串常量=字符数+1

## 字符和字符串

字符是特殊整型  

* 字符串
char 变量名[length] 

char name[3] = {'a','b','\0'}
char name[] = {'a','b','\0'}
char name[] = 'ab'


## 运算符


目：有几个操作数就是几目

+1 一目运算符

power(a,b) : a的b次方

## 字符串函数
string.h
strlen(a)   : 获取字符串长度,unsigined 
strcpy(a,b) :字符串拷贝 strlen(a)>strlen(b) ， 超出的不拷贝
strncpy(a,b，5):字符串拷贝，限制5个
strcat()
strncat()







































 
