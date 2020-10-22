CC = gcc
main: main.c foo.o bar.o
	$(CC) main.c foo.o bar.o -o main 

foo.o: foo.c 
	$(CC) -c foo.c 

bar.o: bar.c 
	$(CC) -c bar.c 

clean: 
	rm *.o main 
