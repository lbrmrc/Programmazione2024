#include "automobile.h"

#define MAX 10

typedef struct {
  Automobile automobili[MAX];
  int dl;
} Autosalone;

void inizializza(Autosalone *pa);
int inserisci(Autosalone *pa);
int ricerca(Autosalone *pa, char *marca);
int conta_auto(Autosalone *pa, int anno);
void stampa_proprietari_maggiore_cilindrata(Autosalone *pa, int cilindrata);