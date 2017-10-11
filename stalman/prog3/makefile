OBJ = main.o fun1.o fun2.o fun3.o fun4.o

all: clean function

function:$(OBJ)
	gcc -o function  $(OBJ) 

main.o:main.c
	gcc -c main.c

fun1.o:fun1.c
	gcc -c fun1.c

fun2.o:fun2.c
	gcc -c fun2.c

fun3.o:fun3.c
	gcc -c fun3.c

fun4.o:fun4.c
	gcc -c fun4.c


clean:
	echo "entering clean task"
	sleep 3
	rm -rf $(OBJ) 
	rm -rf function	
