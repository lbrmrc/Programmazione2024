#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[30];
  float stipendio;
} Record;

int main() {
  Record r;
  FILE *pf;

  pf = fopen("stipendi.dat", "r+b");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }
  while (fread(&r, sizeof(Record), 1, pf) == 1) {
    printf("Dati attuali: %s %.2f\n", r.cognome, r.stipendio);
    if (r.stipendio < 1500.0) {
      r.stipendio *= 1.1;
      // riporto la testina all'inizio del record
      fseek(pf, -sizeof(Record), SEEK_CUR);
      // sovrascrivo il nuovo valore
      fwrite(&r, sizeof(Record), 1, pf);
      // forzo la scrittura
      fflush(pf);
    }
  }

  fclose(pf);
  return 0;
}