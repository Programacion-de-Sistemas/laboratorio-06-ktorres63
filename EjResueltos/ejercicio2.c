#include "chess.h"
#include "figures.h"

void display(){
    char** blackSquare = reverse(whiteSquare);
    char** two= join(blackSquare,whiteSquare);
    char** four= join(two,two);
    char** line= join(four,four);
    interpreter(line);

}
