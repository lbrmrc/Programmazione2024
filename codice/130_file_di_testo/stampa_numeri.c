#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf;
  int numero;

  pf = fopen("numeri.txt", "rt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }

  while (fscanf(pf, "%d", &numero) == 1)
    printf("%d\n", numero);

  fclose(pf);
  return 0;
}