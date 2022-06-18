all: main.o
	g++ main.o $(HW).c -lglut -lGL -lGLU -w -o $(HW)
main.o: main.c chess.c chess.h
	g++ -c main.c chess.c
