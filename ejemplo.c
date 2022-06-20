#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight =up(knight,pawn);
  interpreter(blackKnight);
}
