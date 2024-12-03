#include <stdio.h>
#include <stdlib.h>

int main() {
  char nomefile[30];
  char carattere;
  FILE *pf;

  printf("Nome del file?\n");
  scanf("%s", nomefile);

  pf = fopen(nomefile, "rt");
  if (pf == NULL) {
    printf("Errore apertura %s\n", nomefile);
    exit(1);
  }

  while (fscanf(pf, "%c", &carattere) == 1)
    printf("%c", carattere);

  fclose(pf);
}