#include "chess.h"

void display();

char** flipV(char** a){
    return a;
}

char** flipH(char** a){
    return a;

}
char** rotateL(char** a){
    return a;

}
char** rotateR(char** a){
    return a;

}

char** reverse(char** a){
    char** tmp=a;

    char *weig = &(**tmp);
    while (*tmp) {
      //printf("%s\n", *tmp);
      tmp++;
    }

    return a;
}
char **superImpose(char **a, char **b) { return a; }

char **join(char **a, char **b) { return a; }
char **up(char **a, char **b) { return a; }

char **repeatH(char **a, int n) { return a; }

char **repeatV(char **a, int n) { return a; }
void interpreter(char **);
