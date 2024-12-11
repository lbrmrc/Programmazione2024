#include "studente.h"

#define MAX_STUDENTI 5

typedef struct {
    Studente studenti[MAX_STUDENTI];
    int indice_corrente;
} Registro;

void inizializza_registro(Registro* reg);
int aggiungi_studente(Registro* reg);
void stampa_registro(const Registro* reg);

