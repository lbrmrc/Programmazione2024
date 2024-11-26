// interfaccia dell'ADT Campo

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

// definizione del tipo
typedef struct {
  int caselle[NRIGHE][NCOLONNE];
} Campo;

// dichiarazioni delle funzioni pubbliche
void inizializza(Campo *pc);
void stampa(Campo *pc);