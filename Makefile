#/***           Makefile                ***/


main: main.o queue.o
	gcc main.o queue.o -o main


main.o: main.c queue.c queue.h
	gcc -c  main.c queue.c


clear:
	rm *.o 