#include <stdio.h>
#include <stdlib.h>

#include "listaUtenti.h"

int main(int argc, char *argv[]) {
  FILE *pfb;
  FILE *pft;
  CodiceFiscale cf;
  int attivita;
  Lista listaUtenti;

  if (argc != 3) {
    printf("Uso: %s file_binario file_testo\n", argv[0]);
    exit(1);
  }

  pfb = fopen(argv[1], "rb");
  if (pfb == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }

  nuovaLista(&listaUtenti);

  while (fread(cf, 17, 1, pfb) == 1)
    inserisciUtente(&listaUtenti, cf);

  fclose(pfb);

  pft = fopen(argv[2], "rt");
  if (pft == NULL) {
    printf("Errore apertura %s\n", argv[2]);
    exit(3);
  }

  while (fscanf(pft, "%s%d", cf, &attivita) == 2)
    aggiorna(&listaUtenti, cf, attivita);

 stampa(listaUtenti);

  return 0;
}