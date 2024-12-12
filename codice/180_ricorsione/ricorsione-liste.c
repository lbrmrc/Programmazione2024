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

void stampa(Lista l) {
  if (l == NULL) // caso base, lista vuota
    printf("\n");
  else // caso ricorsivo, lista non vuota
  {
    // stampo la testa della lista
    printf("%d\n", l->dato);
    // stampo ricorsivamente la coda della lista
    stampa(l->next);
  }
}

int main() {
  Lista l;
  l = NULL;

  // l vale [] (lista vuota)

  insTesta(&l, 7);
  insTesta(&l, 5);
  insTesta(&l, 2);
  stampa(l);
  return 0;
}