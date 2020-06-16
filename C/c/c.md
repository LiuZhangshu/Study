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
1. end with \0
2. length not include \0
```c
char *str = "hello" ;//read only  ,point to a unmodifiable char array ,end with \0
char word[] = "hello" ;// can modify   compiler auto add \0 
char line[10]="hello" ; 
```
attention:
```
char* means a pointer point to char or continuous char(string),only when value is \0,it is string 
```

* string array 

```c
char a[][10] ;// get some string,each string's length is less then 10 
char *a[]    ;// get some pinter which point to string 
```
```c
int main(int arc,char const* argv[] )
```

## string calculate 
* sigle char func
putchar(int c ) // put 1 char to std out 
getchar(void)   // ctl+D to get EOF 
keyboard-->shell-->computer
* string.h

```c
//strlen(vary_name) : return length  
//strcmp(a,b)       : compare two arg,if same 0;else diff letter1-letter2
//strcpy(dst,src)   : return dst 
//strcat(dst,src)   : return new string ,concatenate two string 
//strnlen(vary_name) : return length  
// safe mode ,tell n to dual 
//strncmp(a,b,size_t n )       : compare two arg,if same 0;else diff letter1-letter2
//strncpy(dst,src,size_t n )   : return dst 
//strncat(s1,s2,size_t n)   : return new string ,concatenate two string 
//strchr(s1,int c )  : find c and return first appear pointer
//strrstr(s1,int c ) : find c from right and return  first appear index
//strstr            : find string
//strcasestr        : ignore cap
```
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char s[] = "hello" ; 
char *p = strchr(s,'l');
char *t = (char*)malloc(strlen(p)+1);
strcpy(t,p);
printf("%s\n",t);
free(t) ; 
return 0 ; 
}

```


## 运算符


目：有几个操作数就是几目

+1 一目运算符

power(a,b) : a的b次方


## 二维数组
int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}
int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}

## 指针和指针变量
```c
int *p = &a
int * const p  // can't change p 
const int *p  // can't change *P
```
usage: 
modify value through fuction 
value is too big to tansform to function 
make const array 

## malloc and free 
malloc : require ram 
free   : release ram
```c
void *p ;
p = malloc(size) ;
p++ ;
free(p);
```

## enum
```c
#include<stdio.h>
enum color {red,yellow , green,numerofenum) // in fact it's int 
void f(enum color c ) ; 

```

## struct 

```c
struct date{
 int mounth;
 int day ;  
 int year ; 
} ; 
int main(){
 struct date a;
 a.day = 7 ;
 struct date b = {2016,12,12};
}
```

* struct point 

```c
struct date *p = &a ; 
(*p).month =12 
p-> month =12 
```

## typedef  
typedef rawname newname 
typedef int length 
typedef struct aa{int a } ff
typedef struct {int a ;int b } aa 

## union 
union a { int a ;} //share same ram

?????????????

## static
static是全局变量，只会初始化一次；如果在函数内部，只有函数内部可用

## 编译预处理指令

```c
#define PI 3.14159
#define PI prinf("hello") ; 
#define cube(x) x*x*x 
```
c(code)-->i(after "#")-->s(汇编)-->o(连接）-->.out (可执行文件)

gcc --save-temps


## file 
```c
FILE* fp = fopen("file","r") ; 
if(fp){
    int num ; 
    fscanf(fp,"%d\n",num);
    printf("%d\n",num);
    fclose(fp); 
}else{
    printf("can't open");
}
return 0 ; 
}
```





 











































