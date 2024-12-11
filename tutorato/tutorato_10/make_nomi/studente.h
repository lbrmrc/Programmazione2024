#include <stdio.h>
#define DIM 20

// definizioni strutture
typedef struct {
    char nome[DIM];
    char cognome[DIM];
    int  matricola;
} Studente;

void stampaS(Studente s);