all: clean test status
test: test1.o test2.o test3.o
	gcc test1.o test2.o test3.o -o test

test1.o: test1.c
	gcc -c test1.c

test2.o: test2.c
	gcc -c test2.c

test3.o: test3.c
	gcc -c test3.c

clean:
	rm -rf *.o
	rm -rf test

status:
	echo "completed successfully"
