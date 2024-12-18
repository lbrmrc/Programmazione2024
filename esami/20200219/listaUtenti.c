#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "listaUtenti.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Record r) {
  Nodo *aux = malloc(sizeof(Nodo));
  aux->dato = r;
  aux->next = *pl;
  *pl = aux;
}

float costoChiamata(char piano, int secondi) {
  switch (piano) {
  case 'A':
    return 0.15 + 0.08 * (1 + secondi / 60);
  case 'B':
    return 0.12 / 60 * secondi;
  }
}

void aggiornaCredito(Lista l, char numero[], int secondi) {
  while (l != NULL && strcmp(l->dato.numero, numero) != 0)
    l = l->next;
  if (l == NULL) {
    printf("Numero %s non trovato\n");
    exit(4);
  }
  l->dato.credito -= costoChiamata(l->dato.piano, secondi);
}

void stampa(Lista l){
    while (l){
        printf("%s %.2f\n", l->dato.numero, l->dato.credito);
        l = l->next;
    }
}