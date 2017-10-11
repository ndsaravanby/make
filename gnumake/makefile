:all
OBJECTS := add.o sub.o
result:math.c libmath.so
	gcc -o $@ $^ 

libmath.so:$(OBJECTS)
	gcc -shared -o $@ $^ 
	
%.o:%.c
	gcc -fpic -c $<

clean:
	rm -r *.o *so result
