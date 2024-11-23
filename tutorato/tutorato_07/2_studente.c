#include <stdio.h>
#define DIM 50
#define N 3  // Numero massimo di studenti (dimensione logica)

// Definizione della struttura
typedef struct 
{
    char nome[DIM];
    char cognome[DIM];
    int matricola;
} studente;

// Funzione per stampare i dati di uno studente
void stampaStudente(studente s) {
    printf("Nome: %s\n", s.nome);
    printf("Cognome: %s\n", s.cognome);
    printf("Matricola: %d\n\n", s.matricola);
}

// Funzione per stampare tutti gli studenti
void stampaTuttiStudenti(studente studenti[], int n) {
    printf("\n--- Elenco degli Studenti ---\n");
    for (int i = 0; i < n; i++) {
        printf("Studente %d:\n", i + 1);
        stampaStudente(studenti[i]);
    }
}

int main() {
    studente studenti[N]; // Array per salvare N studenti

    // Inserimento dei dati degli studenti
    for (int i = 0; i < N; i++) {
        printf("Inserisci i dati dello studente %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", studenti[i].nome);

        printf("Cognome: ");
        scanf("%s", studenti[i].cognome);

        printf("Matricola: ");
        scanf("%d", &studenti[i].matricola);

        printf("\n"); 
    }

    // Stampa di tutti gli studenti
    stampaTuttiStudenti(studenti, N);

    return 0;
}