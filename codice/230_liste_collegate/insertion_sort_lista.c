#include <stdio.h>
#include <stdlib.h>

typedef int Dato; // gli elementi sono int

typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void insTesta(Lista *pl, int d) {
  Nodo *aux;
  aux = malloc(sizeof(Nodo));
  if (aux == NULL) {
    printf("Allocazione non riuscita\n");
    exit(100);
  }
  aux->dato = d;
  aux->next = *pl; // l del main
  *pl = aux;
}

void elimTesta(Lista *pl) {
  Nodo *aux;
  aux = *pl;
  *pl = (*pl)->next;
  free(aux);
}

void inserimento_ordinato(Lista *pl, Dato d) {
  // pl è l'indirizzo della lista
  while (*pl != NULL && (*pl)->dato < d)
    // assegno a l la sua coda l = l->next
    // assegno a pl l'indirizzo della coda di *pl
    pl = &(*pl)->next;
  insTesta(pl, d);
}

void insertionSort(Lista *pl) {
  Lista l2 = NULL;
  Nodo *p = *pl;

  while (p != NULL) {
    inserimento_ordinato(&l2, p->dato);
    p = p->next;
  }

  *pl = l2;
}

int main() {
  Lista l;

  l = NULL;

  // l vale [] (lista vuota)

  insTesta(&l, 2);
  insTesta(&l, 6);
  insTesta(&l, 1);
  insTesta(&l, 4);

  insertionSort(&l);

  return 0;
}