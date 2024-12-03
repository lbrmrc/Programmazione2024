#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf; // ADT

  pf = fopen("hello.txt", "wt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }
  // file aperto
  fprintf(pf, "Hello World\n");

  // scrittura
  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }

  return 0;
}