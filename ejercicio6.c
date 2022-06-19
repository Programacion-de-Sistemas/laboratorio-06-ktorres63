#include "figures.h"
#include "chess.h"
char** createFigures(){
    char** line = rook;
    char** figures[7] = {knight, bishop, queen,
                         king, bishop, knight, rook};
    for(int i=0;i<7;i++){
        line=join(line,figures[i]);
    }
    return line;
}
char** row(){
    char** Bsquare = reverse(whiteSquare);
    char** line = whiteSquare;

    for(int i=0;i<7;i++){
        if(i%2==0){
            line=join(line,Bsquare);
        }
        else{
            line=join(line, whiteSquare);
        }
    }
    return line;
}
char** center(){
    char** Rrow = reverse(row());
    char** center = row();
    for (int i = 0; i < 3; i++) {
        if(i%2==0){
            center=up(center,Rrow);
        }
        else
            center=up(center,row());

    }

    return center;
}

void display() {
  char **figures = reverse(createFigures());
  char **firstRow = reverse(row());
  interpreter(center());
}
