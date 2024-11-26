#include <stdio.h>
#include <stdlib.h>

#include "campo.h"

float rnd_flt(float minore, float maggiore) {
  return minore + (float)rand() / RAND_MAX * (maggiore - minore);
}

// definizioni delle funzioni
void inizializza(Campo *pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (rnd_flt(0.0, 1.0) < PROBMINA)
        pc->caselle[i][j] = 1;
      else
        pc->caselle[i][j] = 0;
}

void stampa(Campo *pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      if (pc->caselle[i][j])
        printf("*");
      else
        printf(" ");
    printf("\n");
  }
}