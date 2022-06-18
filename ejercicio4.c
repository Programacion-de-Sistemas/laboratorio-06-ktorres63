#include "figures.h"
#include "chess.h"

char** createFigures(){
    char** line = rook;
    char** figures[8] = {rook, knight, bishop, queen, king, bishop, knight, rook};
    for(int i=1; i<=7; i++){
        line = join(line,figures[i]);
    }
    return line;
}

char** createLine(){
    char** blackSquare = reverse(whiteSquare);
    char** linea = whiteSquare;

    for (int i=1; i<=7; i++) {
        if(i%2==0){
            linea = join(linea, whiteSquare);
        }
        else{
            linea = join(linea,blackSquare);
        }
    }


}
void display(){
    char** line = createLine();
    char** figures = createFigures();
    char** firstLine = superImpose(figures, line);
    interpreter(firstLine);
}
