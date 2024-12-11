#include <stdio.h>
#include <stdlib.h>

typedef int Dato; // gli elementi sono int

typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

// fa puntare pl a una lista non ordinata di n elementi (n <= 10)
void listaNonOrdinata(Lista *pl, int n) {
  // gli elementi da inserire nella lista
  int a[] = {6, 2, 8, 3, 4, 7, 0, 2, 5, 1};
  int i;
  // per i che va da 0 a n - 1
  for (i = 0; i < n; i++) {
    // *pl punta a un nuovo nodo
    (*pl) = (Nodo *)malloc(sizeof(Nodo));
    // il cui dato è a[i]
    (*pl)->dato = a[i];
    // e il cui campo next è NULL (cioè *pl ha un solo elemento; eventualmente
    // ne saranno aggiunti altri nelle iterazioni successive)
    (*pl)->next = NULL;
    // assegna a pl l'indirizzo della sua coda
    pl = &(*pl)->next;
  }
}

void stampa(Lista l) {
  while (l != NULL) {
    printf("%d\n", l->dato); // stampo la testa di p
    l = l->next;             // assegno a p la sua coda
  }
}

int lunghezza(Lista l) {
  int cont;
  cont = 0;
  while (l != NULL) {
    cont++;
    l = l->next;
  }
  return cont;
}

int massimo(Lista l) {
  int m; // accumulatore
  if (l == NULL){
    printf("Impossibile calcolare il massimo di una lista vuota\n");
    exit(1);
  }
  m = l->dato;
  l = l->next;
  while (l != NULL) {
    m = l->dato > m ? l->dato : m; // aggiornamento accumulatore
    l = l->next;
  }
  return m;
}

int main() {
  Lista l;

  listaNonOrdinata(&l, 4);
  // l è una lista collegata con 4 elementi
  stampa(l);
  printf("Valore massimo: %d\n", massimo(l));
  return 0;
}