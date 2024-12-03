// legge da un file di interi uno alla volta e li stampa

#include <stdio.h>
#include <stdlib.h>

#define DIM 100 // numero massimo di elementi nel file

int main() {
  int a[DIM];
  int dl; // numero effettivo di elementi nel file
  int i;
  FILE *pf;
  pf = fopen("interi.dat", "rb");
  if (pf == NULL) {
    exit(1);
  }

  dl = fread(a, sizeof(int), DIM, pf);

  fclose(pf);

  for (i = 0; i < dl; i++)
    printf("%d ", a[i]);
  printf("\n");
}