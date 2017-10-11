all:hello
OBJ:=hello.o

hello:$(OBJ)
	gcc -o hello $(OBJ) 

$(OBJ): hello.c
	gcc -c hello.c

clean:
	rm -rf hello
	rm -rf *.o	
