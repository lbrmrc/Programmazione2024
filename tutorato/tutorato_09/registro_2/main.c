#include <stdio.h>
#include <stdlib.h>
#include "registro.h"

int main() {
    Registro registro;
    inizializza_registro(&registro);

    int scelta;
    do {
        printf("\nMenu:\n");
        printf("1. Aggiungi studente\n");
        printf("2. Stampa registro\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: {
               
                if (aggiungi_studente(&registro)) {
                    printf("Studente aggiunto con successo!\n");
                }
                break;
            }
            case 2:
                stampa_registro(&registro);
                break;

            case 0:
                printf("Uscita in corso...\n");
                break;

            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 0);

    return 0;
}
