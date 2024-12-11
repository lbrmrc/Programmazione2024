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

int main() {
  Lista l;

  l = NULL;

  // l vale [] (lista vuota)

  insTesta(&l, 2);
  // l vale [2]

  insTesta(&l, 5);
  // l vale [5,2]

  printf("%d\n", l->dato);

  return 0;
}