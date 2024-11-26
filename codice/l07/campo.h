// interfaccia dell'ADT Campo

#define NRIGHE 12
#define NCOLONNE 15
#define PROBMINA 0.2

// definizione del tipo
typedef struct {
  int caselle[NRIGHE][NCOLONNE];
} Campo;

// dichiarazioni delle funzioni pubbliche
void inizializza(Campo *pc);
void stampa(Campo *pc);