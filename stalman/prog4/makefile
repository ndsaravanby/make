OBJ = main.o fun1.o fun2.o fun3.o fun4.o
all: clean function saravanan.mk
include saravanan.mk
function:$(OBJ)
	gcc -o function  $(OBJ) 

main.o:main.c

fun1.o:fun1.c

fun2.o:fun2.c

fun3.o:fun3.c

fun4.o:fun4.c


.PHONY : clean
clean:
	
	echo "entering clean task"
	sleep 2
	rm -rf $(OBJ) 
	rm -rf function	
