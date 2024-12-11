#include <stdio.h>
#include "studente.h"

void stampa_studente(const Studente* s) {
    if (s) {
        printf("Nome: %s, Età: %d, Voto medio: %.2f\n", s->nome, s->eta, s->voto_medio);
    }
}
