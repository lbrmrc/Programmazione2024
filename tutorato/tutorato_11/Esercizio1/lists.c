#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void insTesta(Lista *pl, Dato d){
  Nodo* aux;
  aux = (Nodo*)malloc(sizeof(Nodo));
  if (aux == NULL) exit(1);
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

Lista* ricerca(Lista* pl) { // restituisce l'indirizzo della lista in testa a cui fare l'inserimento
  while (*pl != NULL) // scorre fino all'ultimo elemento della lista
    // assegno a pl l'indirizzo della coda di *pl
    pl = &(*pl)->next;
  return pl;
}

void inserimentoCoda(Lista* pl, Dato d) {
  // ricerca della lista in testa a cui inserire d
  pl = ricerca(pl);
  // inserimento di d in testa alla lista di indirizzo pl
  insTesta(pl, d);
}

void stampa(Lista l) {
  while (l != NULL) {
    // printf("%d ", l->dato);
    stampaDato(l->dato);
    l = l->next;
  }
  printf("\n");
}

int lunghezza(Lista l) {
  // Reduce(++, 0, l)
  int c = 0; // accumulatore
  while (l) {
    c++; // aggiornamento accumulatore
    l = l->next;
  }
  return c;
}


int somma(Lista l){
  // reduce (+, 0, l)
  
  int s; // accumulatore;
  s = 0; // valore iniziale
  while (l != NULL){
    s = s + l->dato.value; 
    l = l->next;
  }
  // s contiene il valore dell'operazione
  return s;
}

void elimTesta(Lista* pl) {
  Nodo* aux = *pl;
  *pl = (*pl)->next;
  free(aux);
}

void elimTutti(Lista* pl, int d) {
  while (*pl) {
    pl = ricercaDato(pl, d);
    if (*pl)
      elimTesta(pl);
  }
}

Lista* ricercaDato(Lista* pl, int d) { // ricordiamo cos'è Lista => typedef Nodo* Lista;  quindi nella nostra funzione 
  // Lista *pl quindi corrisponde a typedef Nodo** Lista; => un doppio puntatore ...
  // finche' la lista ha elementi
  while (*pl) {
    // se l'elemento corrente ha la proprieta` desiderata
    if ((*pl)->dato.value == d) // ... quindi per accedere al campo dato devo dereferenziare pl doppiamente con gli operatori *, ->
      // esco
      break;
    // altrimenti passo all'elemento successivo
    pl = &(*pl)->next; // pl punta all'indirizzo del puntatore al nodo successivo
  }
  // qui l e` l'indirizzo della lista desiderata, o di quella vuota
  return pl;
}
