#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM], i, m;

  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);
  m = 0;
  for (i = 1; i < DIM; i++)
    if (a[i] > a[m])
      m = i;

  printf("Indice del massimo: %d\n", m);
  printf("Massimo: %d\n", a[m]);
}