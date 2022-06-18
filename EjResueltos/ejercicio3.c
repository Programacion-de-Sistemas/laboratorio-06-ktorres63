#include "chess.h"
#include "figures.h"

void display(){
    char** two = join(reverse(whiteSquare),whiteSquare);
    char** line = repeatH(two, 4);
    char** twolines= up(line,flipV(line));
    char** sq = repeatV(twolines, 2);

    interpreter(sq);
}
