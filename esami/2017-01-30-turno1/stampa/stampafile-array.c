#include <stdio.h>
#include <stdlib.h>

#define DIM 1000

typedef struct {
  char cibo[31];
  float calorie;
} Record;

int main(int argc, char *argv[]) {
  Record tabella[DIM];
  int dlt, i;
  FILE *pf;
  Record r;

  pf = fopen(argv[1], "rb");
  if (pf == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(1);
  }

  dlt = fread(tabella, sizeof(Record), DIM, pf);

  fclose(pf);

  for (i = 0; i < dlt; i++)
    printf("Cibo: %s Calorie: %f\n", tabella[i].cibo, tabella[i].calorie);

  // Errore: lettura disallineata
  //   fread(&r.cibo, 31, 1, pf);
  //   fread(&r.calorie, 4, 1, pf);

  //   fread(&r.cibo, 31, 1, pf);
  //   fread(&r.calorie, 4, 1, pf);

  return 0;
}