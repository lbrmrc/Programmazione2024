#include <malloc.h>

int n; // variable globale

int main() {
  int *pa;
  int i; // variabile automatica

  pa = (int *)malloc(sizeof(int)); // allocazione
  *pa = 7; // "variabile" dinamica

  printf("%d\n", *pa / 2);

  free(pa); // deallocazione

  return 0;
}