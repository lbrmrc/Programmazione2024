#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cibo[31];
  float calorie;
} Record;

int main(int argc, char *argv[]) {
  FILE *pf;
  Record r;

  pf = fopen(argv[1], "rb");
  if (pf == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(1);
  }

  while  (fread(&r, sizeof(Record), 1 ,pf) == 1)
    printf("Cibo: %s Calorie: %f\n", r.cibo, r.calorie);
    

// Errore: lettura disallineata
//   fread(r.cibo, 31, 1, pf);
//   fread(&r.calorie, 4, 1, pf);

//   fread(r.cibo, 31, 1, pf);
//   fread(&r.calorie, 4, 1, pf);

  fclose(pf);
  return 0;
}