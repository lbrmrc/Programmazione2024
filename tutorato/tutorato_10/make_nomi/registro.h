#include "studente.h"

#define MAXSTUD 100

typedef struct {
    Studente arr[MAXSTUD];
    int dl; // Numero di studenti attuali
} Registro;


void ordina(Registro *r) ;
void scrivi_ordinati(Registro *r) ;
void scrivi_ordinati_bin(Registro *r) ;
void inizializza(Registro *r) ;
void carica_dati(Registro *r, char* nomefile);

