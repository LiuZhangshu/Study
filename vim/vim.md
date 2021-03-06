# vim 使用
## 保存和退出
```
wq
q!
```
## 插入
|按键| 功能|
|:----:|:-----:|
|i|在光标之前进入插入模式|
|I|所在行行首进入插入模式|
|a|在光标之后进入插入模式|
|A|所在行行尾进入插入模式|
|o|在当前行的下一行插入空行并进入插入模式|
|O|在当前行的上一行插入空行并进入插入模式|
|s|删除光标指定字符并进入插入模式|
|S|删除当前行并进入插入模式|

## 删除
|按键| 功能|
|:----:|:-----:|
|x|删除当前字符|
|d0|删除光标位置(不包含）到行首|
|d^|同上|
|d$|删除当前位置（包含）到行尾的所有字符|
|db|删除当前位置（不包含）到单词起始处的所有字符|
|de|删除当前位置（包含）到单词结尾处所有字符|
|dw|删除当前位置（包含）到下个单词起始位置所有字符|
|dgg|删除当前位置到文件头所有字符|
|dG|删除当前位置到文件尾字符|
|dd|删除当前行|

* d的内容存放于缓存器（剪切板）

|motion|含义|
|:----:|:-----:|
|0|光标移动到行首|
|^|同上|
|$|光标移动到行尾|
|b|光标移动到单词的起始处|
|e|光标移动到单词的结尾处|
|w|光标移动到下一个单位的起始处|
|gg|光标移动到文件开头|
|G|光标移动到文件末尾|

## 数字+motion
数字+motion = 重复多次操作

d + 数字 + motion = 删除多个motion范围


## 撤销和恢复

|按键| 功能|
|:----:|:-----:|
|u| 撤销最后一次修改|
|U|撤销对整行修改|
|ctrl + r|恢复撤销的内容|

## 复制和粘贴

|按键| 功能|
|:----:|:-----:|
|p|粘贴在光标之后|
|P|粘贴在光标之前|
|y[num] motion |复制|
|r|替换|
|R|进入替换模式|
|c[num] motion|

修改= 删除+插入

## 文件信息查看

ctrl+g

## 跳转
```
行号+G
:行号
```

## 定位括号

光标位于{，%跳转至对应括号

## 缩进
```
>> 缩进

<< 反缩进

可以配合visual
```

## 搜索
```
/+内容  :光标向后搜索

n：下一个

N：上一个

？ 光标向前搜索
```

* : nohl 去掉高亮

## 替换

:%s/oldstr/newstr/g


## 执行shell
```
:![command]
```
## 另存为
```
全部另存为
: w [filename] 
局部另存
step1  visual下选中文本
step2  : w [filename]
覆盖：
:w!
```
## 合并文件
```
:r [filename]
```

## 同时打开多个文件
```
vim -o file1 file2  垂直并排
vim -O file1 file2  水平并排

ctl+w + w           光标切换
:wqa :qa            退出所有
```



# c/c++ 插件配置

![use vim as ide](https://github.com/yangyangwithgnu/use_vim_as_ide)





