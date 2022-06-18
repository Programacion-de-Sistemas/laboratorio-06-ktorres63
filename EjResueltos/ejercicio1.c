#include "chess.h"
#include "figures.h"

void display(){
    char** blacksquare = reverse(whiteSquare);
    char** two = join(whiteSquare,blacksquare);
    char** four = join(two, two);
    char** eight = join(four,four);

    interpreter(eight);
}
