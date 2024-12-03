#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char carattere;
  FILE *pf;

  if (argc != 2) {
    printf("Uso: %s [nomefile]\n", argv[0]);
    exit(2);
  }

  pf = fopen(argv[1], "rt");
  if (pf == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(1);
  }

  while (fscanf(pf, "%c", &carattere) == 1)
    printf("%c", carattere);

  fclose(pf);
}