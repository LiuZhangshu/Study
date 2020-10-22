# scala
## 1. 基本语法

val : 不可变变量，必须声名，初始化后不可以复制

var ： 可变变量

```scala
scala> val myStr = "hello world "
myStr: String = "hello world "

scala> val myStr2:String = "hello world "
myStr2: String = "hello world "
```

默认导入java.lang._   (_=*)

纯碎面向对象
### 数据类型

int string bool double 

a 方法 b = a.func(b)

### 富包装类

基本类中不好包含的方法

### range

循环使用
```scala
scala> 1 to 5
res0: scala.collection.immutable.Range.Inclusive = Range(1, 2, 3, 4, 5)

scala> 1 until 5
res1: scala.collection.immutable.Range = Range(1, 2, 3, 4)

scala> 1 to 10 by 2
res2: scala.collection.immutable.Range = Range(1, 3, 5, 7, 9)

scala> 0.5f to 5.9f by 0.8f
res3: scala.collection.immutable.NumericRange[Float] = NumericRange(0.5, 1.3, 2.1, 2.8999999, 3.6999998, 4.5, 5.3)
```
### 控制台输入输出
* 输入
readInt,readDouble ,readByte,readLine 
```scala 
scala> import io.StdIn._
import io.StdIn._

scala> var i = readInt()
i: Int = 54

scala> println(i)
54
```
* 输出
print printline 


### 文件io
* 写入文件
```scala
scala> import java.io.PrintWriter
import java.io.PrintWriter

scala> val out = new PrintWriter("output.txt")
out: java.io.PrintWriter = java.io.PrintWriter@1c6804cd

scala> for(i <- 1 to 5 ) out.println(i)

scala> out.close()
```
* 读取文件

```scala
scala> import scala.io.Source
import scala.io.Source

scala> val inputfile = Source.fromFile("output.txt")
inputfile: scala.io.BufferedSource = non-empty iterator

scala> val lines = inputfile.get
getClass   getLines

scala> val lines = inputfile.getLines
lines: Iterator[String] = non-empty iterator

scala> for (line<- lines) println(line)
1
2
3
4
5
```

## 数据结构
### 容器
list，array,set,map
#### list 
不可变对象
scala.collection.immutable 

```scala
// 
scala>  import scala.collection.immutable
import scala.collection.immutable
// initial
scala> var strList = List("spark","hadoop","hive")
strList: List[String] = List(spark, hadoop, hive)
scala> val otherList = "apache"::strList
otherList: List[String] = List(apache, spark, hadoop, hive)
scala> val intList = 1::2::3::Nil
intList: List[Int] = List(1, 2, 3)

// first element
scala> strList.head
res2: String = spark
// all elements except first one 
scala> strList.tail
res3: List[String] = List(hadoop, hive)
```
#### set
不重复容器；缺省值为不可变
```scala 
scala>  var mySet = Set("hadoop","spark")
mySet: scala.collection.immutable.Set[String] = Set(hadoop, spark)

scala> mySet += "scala"

scala> mySet
res5: scala.collection.immutable.Set[String] = Set(hadoop, spark, scala)
```
#### map 
默认不可变
可变映射必须显式导入 scala.collection.mutable.MAP



































