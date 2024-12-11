#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 30  // Lunghezza massima per titolo e autore
#define MAXLIBRI 10  // Numero massimo di libri

typedef struct {
    char titolo[DIM];
    char autore[DIM];
    int anno_pubblicazione;
} Libro;

typedef struct {
    Libro libri[MAXLIBRI];
    int indice_corrente; // Numero di libri attualmente registrati
} Biblioteca;

// Dichiarazione delle funzioni per gestire la biblioteca (ADT)
void inizializza_biblioteca(Biblioteca* b);
int aggiungi_libro(Biblioteca* b, Libro l);
void visualizza_biblioteca(const Biblioteca* b);
int cerca_libro_per_titolo(const Biblioteca* b, const char* titolo);


int main() {
    Biblioteca biblioteca;
    inizializza_biblioteca(&biblioteca);

    int scelta;
    do {
        printf("\nMenu:\n");
        printf("1. Aggiungi libro\n");
        printf("2. Visualizza tutti i libri\n");
        printf("3. Cerca libro per titolo\n");
        printf("4. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);
        getchar(); // Per consumare il newline

        switch (scelta) {
            case 1: {
                // Aggiungi libro
                Libro nuovo_libro;
                printf("Inserisci il titolo del libro: ");
                fgets(nuovo_libro.titolo, DIM, stdin);
                nuovo_libro.titolo[strcspn(nuovo_libro.titolo, "\n")] = '\0';  // Rimuovi il newline

                printf("Inserisci l'autore del libro: ");
                fgets(nuovo_libro.autore, DIM, stdin);
                nuovo_libro.autore[strcspn(nuovo_libro.autore, "\n")] = '\0';  // Rimuovi il newline

                printf("Inserisci l'anno di pubblicazione: ");
                scanf("%d", &nuovo_libro.anno_pubblicazione);

                if (aggiungi_libro(&biblioteca, nuovo_libro)) {
                    printf("Libro aggiunto con successo!\n");
                } else {
                    printf("Errore: La biblioteca è piena!\n");
                }
                break;
            }

            case 2: {
                // Visualizza tutti i libri
                visualizza_biblioteca(&biblioteca);
                break;
            }

            case 3: {
                // Cerca libro per titolo
                char titolo[DIM];
                printf("Inserisci il titolo del libro da cercare: ");
                fgets(titolo, DIM, stdin);
                titolo[strcspn(titolo, "\n")] = '\0';  // Rimuovi il newline

                int indice_trovato = cerca_libro_per_titolo(&biblioteca, titolo);
                if (indice_trovato != -1) {
                    printf("Libro trovato:\n");
                    printf("Titolo: %s\n", biblioteca.libri[indice_trovato].titolo);
                    printf("Autore: %s\n", biblioteca.libri[indice_trovato].autore);
                    printf("Anno di pubblicazione: %d\n", biblioteca.libri[indice_trovato].anno_pubblicazione);
                } else {
                    printf("Libro non trovato.\n");
                }
                break;
            }

            case 4:
                printf("Uscita dal programma.\n");
                break;

            default:
                printf("Opzione non valida!\n");
                break;
        }
    } while (scelta != 4);

    return 0;
}

void inizializza_biblioteca(Biblioteca* b) {
    b->indice_corrente = 0; // Inizializza la biblioteca come vuota
}

int aggiungi_libro(Biblioteca* b, Libro l) {
    if (b->indice_corrente < MAXLIBRI) {
        b->libri[b->indice_corrente] = l;
        b->indice_corrente++;
        return 1; // Successo
    }
    return 0; // La biblioteca è piena
}

void visualizza_biblioteca(const Biblioteca* b) { // perchè const? visualizzare non richiede la modifica di nessun elemento (comunque opzionale)
    if (b->indice_corrente == 0) {
        printf("La biblioteca è vuota.\n");
        return;
    }

    printf("Libri nella biblioteca:\n");
    for (int i = 0; i < b->indice_corrente; i++) {
        printf("%d. Titolo: %s, Autore: %s, Anno: %d\n",
            i + 1, b->libri[i].titolo, b->libri[i].autore, b->libri[i].anno_pubblicazione);
    }
}

// Funzione per cercare un libro per titolo e restituire l'indice
int cerca_libro_per_titolo(const Biblioteca* b, const char* titolo) {
    for (int i = 0; i < b->indice_corrente; i++) {
        if (strcmp(b->libri[i].titolo, titolo) == 0) {
            return i; // Restituisce l'indice del libro trovato
        }
    }
    return -1; // Libro non trovato
}
