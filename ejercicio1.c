#include "chess.h"
#include "figures.h"

void display(){
    char** blacksquare = reverse(whiteSquare);
    char** two = join(whiteSquare,blacksquare);
    char** four = join(two, two);

    interpreter(four);
}
