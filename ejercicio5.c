#include "figures.h"
#include "chess.h"

char** createFigures(){
    char** line = reverse(rook);
    char** figures[7] = {knight, bishop, queen,
                         king, bishop, knight, rook};
    for(int i=0;i<7;i++){
        char** rev = reverse(figures[i]);
        line=join(line,rev);
    }
    return line;
}

char **createLine() {
  char **blackSquare = reverse(whiteSquare);
  char **linea = whiteSquare;

  for (int i = 1; i <= 7; i++) {
    if (i % 2 == 0) {
      linea = join(linea, whiteSquare);
    } else {
      linea = join(linea, blackSquare);
    }
  }
}
void display() {
  char **line = createLine();
  char **figures = createFigures();
  char **CompLine = superImpose(figures, line);
  interpreter(CompLine);
}
