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
    for (j = 0; j < NCOLONNE; j++) {
      if (rnd_flt(0.0, 1.0) < PROBMINA)
        pc->caselle[i][j].mina = 1;
      else
        pc->caselle[i][j].mina = 0;
      pc->caselle[i][j].coperta = 1;
    }
}

int mineAdiacenti(Campo *pc, int riga, int col) {
  int contamine;
  contamine = 0;
  if (riga > 0 && col > 0 && pc->caselle[riga - 1][col - 1].mina)
    contamine++;
  if (riga > 0 && pc->caselle[riga - 1][col].mina)
    contamine++;
  if (riga > 0 && col < NCOLONNE - 1 && pc->caselle[riga - 1][col + 1].mina)
    contamine++;
  if (col > 0 && pc->caselle[riga][col - 1].mina)
    contamine++;
  if (col < NCOLONNE - 1 && pc->caselle[riga][col + 1].mina)
    contamine++;
  if (riga < NRIGHE - 1 && col > 0 && pc->caselle[riga + 1][col - 1].mina)
    contamine++;
  if (riga < NRIGHE - 1 && pc->caselle[riga + 1][col].mina)
    contamine++;
  if (riga < NRIGHE - 1 && col < NCOLONNE - 1 &&
      pc->caselle[riga + 1][col + 1].mina)
    contamine++;
  return contamine;
}

void stampa(Campo *pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    printf("%2d ", i + 1);
    for (j = 0; j < NCOLONNE; j++)
      if (pc->caselle[i][j].coperta)
        printf("#");
      else if (pc->caselle[i][j].mina)
        printf("*");
      else {
        int m = mineAdiacenti(pc, i, j);
        if (m > 0)
          printf("%d", m);
        else
          printf(" ");
      }
    printf("\n");
  }
  printf("   ");
  for (j = 0; j < NCOLONNE; j++)
    printf("%c", 'a' + j);
  printf("\n");
}

void aggiorna(Campo *pc, Mossa m) {
  pc->caselle[m.riga][m.col].coperta = 0;
}