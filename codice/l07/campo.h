#include "mossa.h"

// interfaccia dell'ADT Campo

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

typedef struct {
  int mina;
  int coperta;
} Casella;

// definizione del tipo
typedef struct {
  Casella caselle[NRIGHE][NCOLONNE];
} Campo;

// dichiarazioni delle funzioni pubbliche
void inizializza(Campo *pc);

void aggiorna(Campo *pc, Mossa m);

void stampa(Campo *pc);