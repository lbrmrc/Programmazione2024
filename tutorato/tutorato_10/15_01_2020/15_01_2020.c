#include <stdio.h>
#include <string.h>

#define MAX_MEMORIE 100
#define DIM_COSTRUTTORE 20

typedef struct {
    char costruttore[DIM_COSTRUTTORE];
    int tempo_accesso; // in ns
    int costo;         // in $
} Memoria;

typedef struct {
    Memoria memorie[MAX_MEMORIE];
    int dl; // Numero di memorie attuali
} Registro;

// Funzioni per la gestione del Registro (ADT)
void inizializza_registro(Registro *r);
int leggi_file(char *filename, Registro *r);
int elaborazione(Registro *r, Memoria attuale, Registro *migliori);
int domina(Memoria nuova, Memoria attuale);
void stampa_memorie(Registro *r);

int main() {
    Registro registro, migliori;
    Memoria attuale = {"Corrente", 47, 46}; // Specifiche della memoria attuale

    // Inizializza i registri
    inizializza_registro(&registro);
    inizializza_registro(&migliori);

    // 1. Leggi il file
    if (!leggi_file("memory.txt", &registro)) {
        printf("Errore nella lettura del file.\n");
        return 1;
    }

    printf("Elenco completo delle memorie:\n");
    stampa_memorie(&registro);

    // 2. Trova memorie migliori
    elaborazione(&registro, attuale, &migliori);

    // 3. Stampa l'elenco delle memorie migliori
    printf("\nElenco delle memorie migliori:\n");
    if (migliori.dl > 0) {
        stampa_memorie(&migliori);
    } else {
        printf("Non ci sono memorie migliori di quella attuale.\n");
    }

    return 0;
}

// Funzione per inizializzare il Registro
void inizializza_registro(Registro *r) {
    r->dl = 0;
}


// Funzione per leggere il file memory.txt e popolare il Registro
int leggi_file(char *filename, Registro *r) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0; // Errore nell'apertura del file
    }

    Memoria temp;
    while (fscanf(file, "%s %d %d", temp.costruttore, &temp.tempo_accesso, &temp.costo) == 3) {
         if (r->dl >= MAX_MEMORIE) {
            printf("Errore: Registro pieno.\n");
            return 0;
         }
         else
         {
            r->memorie[r->dl] = temp;
            r->dl++;
         }
    }

    fclose(file);
    return 1; // File letto correttamente
}

// Funzione per verificare se una memoria è migliore di quella attuale
int domina(Memoria nuova, Memoria attuale) { // NB domina non modifica le strutture ma fo solo controlli => niente puntatori => niente notazione ->
    if ((nuova.tempo_accesso <= attuale.tempo_accesso && nuova.costo <= attuale.costo) &&
        (nuova.tempo_accesso < attuale.tempo_accesso || nuova.costo < attuale.costo)) {
        return 1; // La nuova memoria è migliore
    }
    return 0; // La nuova memoria non è migliore
}

// Funzione per trovare le memorie migliori rispetto a quella attuale
int elaborazione(Registro *r, Memoria attuale, Registro *migliori) {
    for (int i = 0; i < r->dl; i++) {
        if (domina(r->memorie[i], attuale)) {
            migliori->memorie[migliori->dl] = r->memorie[i];
            migliori->dl++;
        }
    }
    return migliori->dl; // Numero di memorie migliori trovate
}

// Funzione per stampare le memorie in un Registro
void stampa_memorie(Registro *r) {
    for (int i = 0; i < r->dl; i++) {
        printf("%s %d ns %d $\n", r->memorie[i].costruttore, r->memorie[i].tempo_accesso, r->memorie[i].costo);
    }
}
