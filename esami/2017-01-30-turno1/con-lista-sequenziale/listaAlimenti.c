#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "listaAlimenti.h"


// definizione
void nuovaLista(Lista *pl) { pl->n_elementi = 0; }

void insCoda(Lista *pl, Cibo r) {
  pl->dati[pl->n_elementi] = r;
  pl->n_elementi++;
}

float calorie100(Lista l, char nome[]) {
  int i;
  for (i = 0; i < l.n_elementi; i++) {
    if (strcmp(l.dati[i].nome, nome) == 0) // trovato il cibo
      return l.dati[i].calorie;
  }
  printf("Cibo non trovato: %s\n", nome);
  exit(4);
}