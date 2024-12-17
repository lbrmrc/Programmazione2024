#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaClienti.h"

char *nomi_mesi[12] = {"gen", "feb", "mar", "apr", "mag", "giu",
                       "lug", "ago", "set", "ott", "nov", "dic"};

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d) {
  Nodo *aux;
  aux = malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista *pl, Record r) {
  while ((*pl) != NULL && strcmp((*pl)->dato.cf, r.cf) < 0)
    pl = &(*pl)->next;
  if (*pl == NULL || (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) > 0)) {
    // creo nuovo nodo
    Dato d;
    int i;
    strcpy(d.cf, r.cf);
    d.totale = 0.0;
    for (i = 0; i < 12; i++)
      d.importi_mensili[i] = 0.0;
    insTesta(pl, d);
  }
  (*pl)->dato.totale += r.importo;
  (*pl)->dato.importi_mensili[r.mese - 1] += r.importo;
}

void stampa(Lista l) {
  int i;
  while (l) {
    printf("%s %.2f\n", l->dato.cf, l->dato.totale);
    for (i = 0; i < 12; i++)
      printf("\t%s: %.2f\n", nomi_mesi[i], l->dato.importi_mensili[i]);
    printf("\n");
    l = l->next;
  }
}