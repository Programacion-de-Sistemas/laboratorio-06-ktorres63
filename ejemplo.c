#include "chess.h"
#include "figures.h"
#include "chess.c"

void display(){
  char** blackKnight =reverse(knight);
  interpreter(blackKnight);
}
