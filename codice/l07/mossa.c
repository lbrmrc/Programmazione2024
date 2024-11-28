#include <stdio.h>

#include "mossa.h"

void leggiMossa(Mossa *pm){
    char s[5];
    scanf("%s", s);
    pm->col = s[0] - 'a';
    pm->riga = s[1] - '1';
}