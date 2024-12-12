#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[30];
  float stipendio;
} Record;

int main() {
  Record r;
  FILE *pf;

  pf = fopen("stipendi.dat", "rb");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }
  while (fread(&r, sizeof(Record), 1, pf) == 1) {
    printf("Dati attuali: %s %.2f\n", r.cognome, r.stipendio);
  }

  fclose(pf);
  return 0;
}