# Makefile 
## sigle file 
filename: Makefile 

```makefile 
garget: dependencies 
    command 
```
simple
```makefile 
test: test.c
    gcc test.c -o test 
```

## multi file 

steps :
    1. compile evry singlefile 
    2. combine binary file to main.c 
details :
```makefile

main: main.c tool.o
    gcc main.c tool.o -o main
tool.o: tool.c 
    gcc -c tool.c # -c means compile tool.c to tool.o
```
** make operate from down to up **

## clean 
simple 
```make file 
clean: 
    rm *.o main 
```
## variable 
```
CC=gcc  #define 
CFLAGS = -lm -wall -g 

$(CC)   # use 
```
## multiple results 
```
all: main_max main_min 
```

