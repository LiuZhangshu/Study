* 添加调试信息
gcc test.c -g 
* gdb 启动
gdb a.out 
* 命令
run(r) 启动
quit   退出 
break  (main/文件名：行号) 设置断点
continue 执行之后的所有
next     下一步
enter    重复上一条命令
step     进入函数内部
list     显示接下来10行
print[变量名/函数名]  打印变量值
info breake          查看断点信息
info reg             查看寄存器信息
delete               删除所有断点
delete [no]          删除指定断点


