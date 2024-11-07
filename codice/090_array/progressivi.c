#include <stdio.h>
#define DIM 10

int main() {
  int n;
  int a[DIM];
  int i;
  printf("Inserisci un intero\n");
  scanf("%d", &n);
  // assegniamo ad a i valori naturali consecutivi a partire da n+1
  for (i = 0; i < DIM; i++)
    a[i] = n + 1 + i;

  // stampiamo l'array
  for (i = 0; i < DIM; i++)
    printf("%d\n", a[i]);
}