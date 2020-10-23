all: mystring.o work8.o
	gcc -o mystring mystring.o work8.o

mystring.o: mystring.c mystring.h
	gcc -c mystring.c

work8.o: work8.c mystring.h
	gcc -c work8.c

run: mystring
	./mystring
