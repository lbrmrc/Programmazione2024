#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaUtenti.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d) {
  Nodo *aux = malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void inserisciUtente(Lista *pl, CodiceFiscale cf) {
  Dato d;
  strcpy(d.cf, cf);
  d.att1 = 4;
  d.att2 = 4;
  d.att3 = 4;
  insTesta(pl, d);
}

void aggiorna(Lista *pl, CodiceFiscale cf, int attivita) {
  while (*pl != NULL && strcmp((*pl)->dato.cf, cf) != 0)
    pl = &(*pl)->next;
  if (*pl != NULL && strcmp((*pl)->dato.cf, cf) == 0)
    switch (attivita) {
    case 1:
      if ((*pl)->dato.att1 < 1)
        printf("Utente %s, attivita 1: accesso negato\n", (*pl)->dato.cf);
      else
        (*pl)->dato.att1--;
      break;
    case 2:
      if ((*pl)->dato.att2 < 1)
        printf("Utente %s, attivita 2: accesso negato\n", (*pl)->dato.cf);
      else
        (*pl)->dato.att2--;
      break;
    case 3:
      if ((*pl)->dato.att3 < 1)
        printf("Utente %s, attivita 3: accesso negato\n", (*pl)->dato.cf);
      else
        (*pl)->dato.att3--;
      break;
    }
}

void stampa(Lista l) {
  while (l) {
    printf("Ingressi utente %s: %d %d %d\n", l->dato.cf, l->dato.att1,
           l->dato.att2, l->dato.att3);
    l = l->next;
  }
}
