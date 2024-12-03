// legge da un file di interi uno alla volta e li stampa

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  FILE *pf;
  pf = fopen("interi.dat", "rb");
  if (pf == NULL) {
    exit(1);
  }
  while (fread(&n, sizeof(int), 1, pf) == 1)
    printf("%d\n", n);
  fclose(pf);
}