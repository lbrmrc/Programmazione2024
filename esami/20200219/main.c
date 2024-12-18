#include <stdio.h>
#include <stdlib.h>

#include "listaUtenti.h"

int main(int argc, char *argv[]) {
  Record r;
  FILE *pfb, *pft;
  Lista l;
  char numero[11];
  int secondi;

  if (argc != 3) {
    printf("Uso: %s file_utenti file_chiamate\n", argv[0]);
    exit(1);
  }

  nuovaLista(&l);

  pfb = fopen(argv[1], "rb");
  if (pfb == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }
  while (fread(&r, sizeof(Record), 1, pfb) == 1)
    insTesta(&l, r);
  fclose(pfb);

  pft = fopen(argv[2], "rt");
  if (pft == NULL) {
    printf("Errore apertura %s\n", argv[2]);
    exit(3);
  }
  while (fscanf(pft,"%s%d", numero, &secondi) == 2)
    aggiornaCredito(l, numero, secondi);
  fclose(pft);
  stampa(l);
  return 0;
}