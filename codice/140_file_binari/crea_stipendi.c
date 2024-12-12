#include <stdio.h>

typedef struct {
  char cognome[30];
  float stipendio;
} Record;

int main() {
  Record stipendi[5] = {{"Rossi", 1450.0},
                        {"Bianchi", 2500.0},
                        {"Verdi", 1200.0},
                        {"Esposito", 1400.0},
                        {"Greco", 1750.0}};
  FILE *pf;

  pf = fopen("stipendi.dat", "wb");
  fwrite(stipendi, sizeof(Record), 5, pf);
  fclose(pf);
  return 0;
}