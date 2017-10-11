test: main.c fun1.o fun2.o fun3.o
	gcc  main.c fun1.o fun2.o fun3.o -o test

fun1.o:fun1.c
	gcc -c fun1.c

fun2.o:fun2.c
	gcc -c fun2.c

fun3.o:fun3.c
	gcc -c fun3.c

clean:
	rm -rf *.o
	rm -rf test
