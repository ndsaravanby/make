math: math.o add.o sub.o
	gcc math.o add.o sub.o -o math

math.o: math.c add.h sub.h
	gcc -c math.c

add.o: add.c
	gcc -c add.c

sub.o: sub.c
	gcc -c sub.c

clean:
	rm -rf *.o
	rm -rf math
