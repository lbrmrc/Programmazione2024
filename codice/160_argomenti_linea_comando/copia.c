// ./copia [origine] [destinazione]
// copia il file di testo [origine] nel file di testo[destinazione]

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *pfo, *pfd;
  char carattere;

  if (argc != 3) {
    printf("Uso: %s [orig] [dest]\n", argv[0]);
    exit(1);
  }

  pfo = fopen(argv[1], "rt");
  if (pfo == NULL) {
    printf("Errore apertura file %s in lettura\n", argv[1]);
  }

  pfd = fopen(argv[2], "wt");
  if (pfd == NULL) {
    printf("Errore apertura file %s in scrittura\n", argv[2]);
  }

  while (fscanf(pfo, "%c", &carattere) == 1)
    fprintf(pfd, "%c", carattere);

  fclose(pfo);
  fclose(pfd);

  return 0;
}