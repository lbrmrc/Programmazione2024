#include <stdio.h>

#include "mossa.h"

void leggiMossa(Mossa *pm){
    char s[5];
    scanf("%s", s);
    pm->col = s[0] - 'a';
    pm->riga = s[1] - '1';
}


int riga(Mossa m){
    return m.riga;
}
int colonna(Mossa m){
    return m.col;
}