#include <stdio.h>
#include <stdlib.h>

#include "listaAlimenti.h"

int main(int argc, char *argv[]) {
  Lista lista;
  FILE *pfb;
  FILE *pft;
  // correttezza della linea di comando
  Cibo r;

  char nome_cibo[31];
  float grammi;

  float calorie_totali;


  if (argc != 3) {
    printf("Uso: %s [fileCalorie] [filePasto]\n");
    exit(1);
  }

  nuovaLista(&lista); // utilizzo

  pfb = fopen(argv[1], "rb");
  if (pfb == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }

  while (fread(&r, sizeof(Cibo), 1, pfb) == 1)
    insOrdinato(&lista, r);
  fclose(pfb);

  pft = fopen(argv[2], "rt");
  if (pft == NULL) {
    printf("Errore apertura %s\n", argv[2]);
    exit(3);
  }

  calorie_totali = 0.0;

  while (fscanf(pft, "%s%f", nome_cibo, &grammi) == 2)
    calorie_totali =
        calorie_totali + grammi * calorie100(lista, nome_cibo) / 100.0;

  printf("Calorie consumate: %.2f\n", calorie_totali);

  return 0;
}