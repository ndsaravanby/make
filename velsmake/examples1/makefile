hello: hello.o add_sub.o
	gcc hello.o add_sub.o -o hello

hello.o: hello.c add.h
	gcc -c hello.c add.h  

add_sub.o: add_sub.c
	gcc -c add_sub.c
clean:
	rm -rf *.o hello
