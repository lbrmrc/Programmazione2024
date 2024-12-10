#include <stdio.h>
#include <string.h>
#include "registro.h"

void inizializza_registro(Registro* reg) {
    if (reg) {
        reg->indice_corrente = 0;
    }
}

int aggiungi_studente(Registro* reg) {
    int i = reg -> indice_corrente;
    if (reg->indice_corrente < MAX_STUDENTI) {
        printf("Inserisci il nome dello studente (max 20 caratteri): ");
        scanf("%s", reg->studenti[i].nome);
        printf("Inserisci l'età: ");
        scanf("%d", &(reg->studenti[i].eta));
        printf("Inserisci il voto medio: ");
        scanf("%f", &(reg->studenti[i].voto_medio));
        reg->indice_corrente++;
        return 1;
    }
    else{
        printf("Errore: Registro pieno!\n");
        return 0;
    }
        
}

void stampa_registro(const Registro* reg) {
    if (reg) {
        printf("Registro studenti (%d/%d):\n", reg->indice_corrente, MAX_STUDENTI);
        for (int i = 0; i < reg->indice_corrente; i++) {
            stampa_studente(&reg->studenti[i]);
        }
    }
}
