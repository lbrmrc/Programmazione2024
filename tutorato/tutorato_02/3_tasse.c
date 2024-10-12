#include <stdio.h>

int main() {
    // Definizione delle costanti
    const int SOGLIA_1 = 10000;
    const int SOGLIA_2 = 30000;
    const int SOGLIA_3 = 60000;

    const int QUOTA_1 = 10;  // 10% fino a SOGLIA_1
    const int QUOTA_2 = 20;  // 20% fino a SOGLIA_2
    const int QUOTA_3 = 30;  // 30% oltre SOGLIA_3

    int reddito, tasse = 0;

    // Chiedi all'utente di inserire il reddito annuo
    printf("Inserisci il tuo reddito annuo: ");
    scanf("%d", &reddito);

    // Verifica che il reddito non sia negativo
    if (reddito < 0) {
        printf("Errore: il reddito non può essere negativo.\n");
    } else {
        // Calcolo delle tasse in base alle fasce di reddito
        if (reddito <= SOGLIA_1) {
            tasse = reddito * QUOTA_1 / 100;
        }
        else if (reddito <= SOGLIA_2) {
            tasse = reddito * QUOTA_2 / 100;
        }
        else if (reddito <= SOGLIA_3) {
            tasse = reddito * QUOTA_3 / 100;
        }
        else {
            tasse = reddito * QUOTA_3 / 100;
        }

        // Stampa l'ammontare delle tasse
        printf("Il totale delle tasse da pagare è: %d€\n", tasse);
    }

    return 0;
}
