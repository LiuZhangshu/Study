# maven部署使用

## 1.maven介绍

### 目录结构

bin：可执行命令存放
boot：类加载器框架
conf：配置文件
lib：类库

### maven部署使用


M2_HOME=maven解压目录

path 添加M2_HOME\bin


查看maven版本号 mvn -v

## 2 maven样例

### 2.1 工程目录解析

```
src
    -main
        -java
            -package（主程序位置）
    -test
        -java
            -package（测试jar位置）
    -resources
target
    -classes（编译结果存放文件）
    -surefire-reports(测试报告文件存放位置)

```

### 2.2 pom文件解析

作用：项目描述文件

#### 2.2.1 POM中的元素

核心元素（必要）

```
project:根元素，包含约束信息

modelVersion：当前POM的版本

groupId：公司/组织名称

artifactId：项目名称

version：当前项目版本号，0.0.0版本
	第一个表示大版本号；
	第二个表示分支版本号；
	第三个表示小版本号；
	snapshot快照
	alpha内部测试
	beta公测
	release稳定
	GA正式发布
	
package:打包方式，默认为jar；war zip pom
```

重要元素

```
dependency:依赖项(子元素见例子)
```

其他元素

```
name:项目描述名，配合文档使用

url:项目地址

description：项目描述

developers:开发者

license：许可证信息

organization：组织信息
```

样例

```xml
<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="http://maven.apache.org/POM/4.0.0"
         xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/xsd/maven-4.0.0.xsd">
    <modelVersion>4.0.0</modelVersion>

	<!--公司/组织名称+项目名-->
    <groupId>com.kiopju</groupId>    
	<!--项目名称-->
    <artifactId>ThinkInJava</artifactId> 
	<!--快照名称-->
    <version>1.0-SNAPSHOT</version>
	<package>jar</package>
	<name>项目描述名</name>
	<url></url>
	<description></description>
	<developers></developers>
	<license></license>
	<organization></organization>
	<!--依赖项-->
	<dependencies>	
		<!--可以添加多个-->
		<dependency>
			<!--引用的包名-->
			<groupId>junit</groupId>
			<!--引用的模块名-->
			<artifactId>junit</artifactId> 
    		<version>4.10</version>
			<!--依赖范围（可以省略），默认compile；provide运行无效，测试编译有效；test测试有效；-->
			<scope>test</scope>
			<!--设置依赖是否可选（可以省略）,默认false-->
			<optional></optional>
			<!--排除依赖传递列表，排除父项目依赖-->
			<exclusions>
				<exclusion>
				</exclusion>
			</exclusions>
		</dependency>
	</dependencies>
	<!--依赖管理，不会实际引用，用于子模块继承-->
	<dependencyManagement>
		<dependencies>
		<dependencies>
	</dependencyManagement>
	<!--引用插件-->
	<build>
		<!--插件列表-->
		<plugins>
			<!--插件信息-->
			<groupId>org.apache.maven.plugins</groupId>
			<artifactId>maven-source-plugin</artifactId>
			<version>2.4</version>
			<!--执行阶段-->
			<executions>
				<excution>
					<phase>package</phase>
					<goals>
						<goal>jar-no-fork</goal>
					</goals>
				</excution>
			</excutions>
		</plugins>
	</build>
    
	<parent></parent>

	<modues><modues>
</project>
```

## 3 maven命令

maven compile：编译

maven test：测试用例

mvn package：打包命令（会自动运行compile和test）

maven clean ：删除target中文件

maven install ：安装class到本地仓库


## 4 自动建立项目骨架

按提示入参数：mvn archetypes：generate

指定参数：mvn archetypes：generate -DgroupId=组织名  -DartifactId=项目名-模块名 -Dversion=版本号  -Dpackage=代码包名


## 5 maven的坐标和仓库

### 5.1 坐标：
```
构件，groupId、artifactId、version确定唯一
```
### 5.2 仓库：
```
管理项目依赖；包括本地仓库和远程仓库（镜像仓库）
```

#### 5.2.1 镜像仓库设置
```
1.修改 M2_HOME\conf\settings.xml

2.添加
	 <mirror>
      <id>mirrorId.net.cn</id>
      <mirrorOf>central</mirrorOf>
      <name>central mirror in china</name>
      <url>http://maven.net.cn/content/groups/public</url>
```

#### 5.2.2 本地仓库存放位置
```
默认位置：~/.m2/repository

1.修改 M2_HOME\conf\settings.xml

2.添加 <localRepository>路径</localRepository>

```

## 6 项目构建过程

项目构建过程：清理，编译，测试，打包，集成测试，验证，部署

maven生命周期：
```
clean   清理项目
default 构建项目
site    生成项目站点
```

## 7 依赖冲突

原则

1.短路优先

2.先声明先使用

## 8 其他

依赖包可以上maven中心仓库查找其坐标