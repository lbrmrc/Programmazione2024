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

int mineAdiacenti(Campo *pc, int riga, int col) {
  int contamine;
  contamine = 0;
  if (riga > 0 && col > 0 && pc->caselle[riga - 1][col - 1])
    contamine++;
  if (riga > 0 && pc->caselle[riga - 1][col])
    contamine++;
  if (riga > 0 && col < NCOLONNE - 1 && pc->caselle[riga - 1][col + 1])
    contamine++;
  if (col > 0 && pc->caselle[riga][col - 1])
    contamine++;
  if (col < NCOLONNE - 1 && pc->caselle[riga][col + 1])
    contamine++;
  if (riga < NRIGHE - 1 && col > 0 && pc->caselle[riga + 1][col - 1])
    contamine++;
  if (riga < NRIGHE - 1 && pc->caselle[riga + 1][col])
    contamine++;
  if (riga < NRIGHE - 1 && col < NCOLONNE - 1 && pc->caselle[riga + 1][col + 1])
    contamine++;
  return contamine;
}

void stampa(Campo *pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      if (pc->caselle[i][j])
        printf("*");
      else
        printf("%d", mineAdiacenti(pc, i, j));
    printf("\n");
  }
}