#include <stdio.h>
#include <stdlib.h>

#include "listaClienti.h"

int main(int argc, char *argv[]) {
  Lista l;
  FILE *pf;
  Record r;
  nuovaLista(&l);

  if (argc != 2) {
    printf("Uso: %s file_fatture\n", argv[0]);
    exit(1);
  }

  pf = fopen(argv[1], "rt");
  if (pf == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }

  while (fscanf(pf, "%s%d%d%d%f", r.cf, &r.giorno, &r.mese, &r.anno,
                &r.importo) == 5)
    aggiorna(&l, r);
  fclose(pf);

stampa(l);

  return 0;
}