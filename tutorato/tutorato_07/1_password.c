#include <stdio.h>
#include <string.h>

// Funzione per controllare se la password contiene almeno un carattere speciale
int contieneCarattereSpeciale(const char *password) {
    const char speciali[] = "?!*";
    for (int i = 0; password[i] != '\0'; i++) {
        for (int j = 0; speciali[j] != '\0'; j++) {
            if (password[i] == speciali[j]) {
                return 1; // Carattere speciale trovato
            }
        }
    }
    return 0; // Nessun carattere speciale trovato
}

int main() {
    char vecchiaPassword[50];
    char nuovaPassword[50];
    int check = 1; //flag

    // Input della vecchia password
    printf("Inserisci la vecchia password: ");
    scanf("%s", vecchiaPassword);

    do {
        // Input della nuova password
        printf("Inserisci la nuova password: ");
        scanf("%s", nuovaPassword);

        // Verifica se la nuova password è diversa dalla vecchia
        if (strcmp(vecchiaPassword, nuovaPassword) == 0) {
            printf("Errore: la nuova password non può essere uguale alla vecchia.\n");
            continue;
        }

        // Verifica se la nuova password è lunga almeno 8 caratteri
        if (strlen(nuovaPassword) < 8) {
            printf("Errore: la nuova password deve contenere almeno 8 caratteri.\n");
            continue;
        }

        // Verifica se la nuova password contiene almeno un carattere speciale
        if (!contieneCarattereSpeciale(nuovaPassword)) {
            printf("Errore: la nuova password deve contenere almeno un carattere speciale (?, !, *).\n");
            continue;
        }

        // Se tutte le condizioni sono soddisfatte, la password è valida
        printf("Password aggiornata con successo!\n");
        strcpy(vecchiaPassword, nuovaPassword);
        check = 0;
    }while (check);
    

    return 0;
}
