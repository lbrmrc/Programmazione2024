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
  Nodo *aux = *pl;
  *pl = (*pl)->next;
  free(aux);
}

void elimina(Lista *pl, Dato d) {
  while (*pl != NULL && (*pl)->dato != d)
    pl = &(*pl)->next;
  if (*pl != NULL && (*pl)->dato == d)
    elimTesta(pl);
}

int main() {
  Lista l;

  l = NULL;

  // l vale [] (lista vuota)

  insTesta(&l, 7);

  insTesta(&l, 5);

  insTesta(&l, 2);

  elimina(&l, 5);

  return 0;
}