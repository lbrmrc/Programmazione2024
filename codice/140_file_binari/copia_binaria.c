// esegue una copia binaria da origine a destinazione

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *pfo;
  FILE *pfd;
  unsigned char byte;

  if (argc != 3) {
    printf("Uso: %s [orig] [dest]\n", argv[0]);
    exit(1);
  }

  pfo = fopen(argv[1], "rb");
  if (pfo == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(2);
  }

  pfd = fopen(argv[2], "wb");
  if (pfd == NULL) {
    printf("Errore apertura %s\n", argv[2]);
    exit(3);
  }

  while (fread(&byte, 1, 1, pfo) == 1)
    fwrite(&byte, 1, 1, pfd);

  fclose(pfo);
  fclose(pfd);
  return 0;
}