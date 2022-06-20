all: main.o
	g++ main.o $(HW).c -lglut -lGL -lGLU -w -o $(HW)
main.o: main.c chess.c
	g++ -c main.c chess.c
