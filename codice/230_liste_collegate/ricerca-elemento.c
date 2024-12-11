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

int ricerca_ordinata(Lista l, Dato d) {

  while (l != NULL && l->dato < d) // criterio di ricerca non rispettato
    l = l->next;
  if (l != NULL && l->dato == d)
    return 1;
  else
    return 0;
}

int main() {
  Lista l;

  l = NULL;

  // l vale [] (lista vuota)

  insTesta(&l, 7);

  insTesta(&l, 5);

  insTesta(&l, 2);

  if (ricerca_ordinata(l, 3))
    printf("3 Trovato\n");
  else
    printf("3 Non trovato\n");

  if (ricerca_ordinata(l, 2))
    printf("2 Trovato\n");
  else
    printf("2 Non trovato\n");

  return 0;
}