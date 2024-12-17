#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "listaClienti.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d) {
  Nodo *aux;
  aux = malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista *pl, Record r) {
  while ((*pl) != NULL && strcmp((*pl)->dato.cf, r.cf) != 0)
    pl = &(*pl)->next;
  if (*pl == NULL) {
    // creo nuovo nodo
    Dato d;
    strcpy(d.cf, r.cf);
    d.totale = 0.0;
    insTesta(pl, d);
  }
  (*pl)->dato.totale += r.importo;
}

void stampa(Lista l) {
  while (l) {
    printf("%s %.2f\n", l->dato.cf, l->dato.totale);
    l = l->next;
  }
}