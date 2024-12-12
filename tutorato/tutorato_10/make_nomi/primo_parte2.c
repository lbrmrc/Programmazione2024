#include <stdio.h>
#include <stdlib.h>

#define DIM 20
#define MAXSTUD 100

// Definizione delle strutture
typedef struct {
    char nome[DIM];
    char cognome[DIM];
    int matricola;
} Studente;

typedef struct {
    Studente arr[MAXSTUD];
    int dl; // Numero di studenti attuali
} Registro;

// Funzioni per la gestione del Registro (ADT)
void inizializza(Registro* r);
int aggiungi(Registro* r, Studente s); // Funzione che ritorna successo/fallimento
void stampaR(Registro* r); // Passa il registro come const, non lo modifichi
void scrivi_primo(Registro* r); // Passa il registro come const, non lo modifichi
void carica_dati_binario(Registro* r, char* nome_file); // Carica dati dal file binario
void stampaS(Studente s);

// Funzione principale
int main() {
    Registro r;

    // Inizializza il registro
    inizializza(&r);

    // Leggi dal file binario "ordinati.dat"
    carica_dati_binario(&r, "ordinati.dat");

    // Stampa tutti gli elementi letti
    stampaR(&r);

    // Scrivi il primo elemento in "primo.txt"
    scrivi_primo(&r);

    return 0;
}

// Funzione per inizializzare il registro
void inizializza(Registro* r) {
    r->dl = 0; // Il registro parte vuoto
}

// Funzione per aggiungere uno studente al registro
int aggiungi(Registro* r, Studente s) {
    if (r->dl < MAXSTUD) {
        r->arr[r->dl] = s;
        r->dl++;
        return 1; // Successo
    }
    return 0; // Fallimento (registro pieno)
}


void stampaS(Studente s)
{
    printf("Studente : %s %s %d\n", s.cognome, s.nome, s.matricola);
}

// Funzione per stampare gli studenti
void stampaR(Registro* r) {
    printf("Studenti letti dal file 'ordinati.dat':\n");
    for (int i = 0; i < r->dl; i++) {
        stampaS(r->arr[i]);
        //printf("%s %s %d\n", r->arr[i].cognome, r->arr[i].nome, r->arr[i].matricola);
    }
}

// Funzione per scrivere il primo elemento in "primo.txt"
void scrivi_primo(Registro* r) {
    FILE* fout_txt = fopen("primo.txt", "w");
    if (fout_txt == NULL) {
        printf("Errore nell'apertura del file 'primo.txt'.\n");
        exit(2);
    }

    if (r->dl > 0) { // Controlla che ci sia almeno un elemento
        printf("Lo studente più vecchio è ");
        stampaS(r->arr[0]);
        //scrittura su file di testo
        fprintf(fout_txt, "%s %s %d\n", r->arr[0].cognome, r->arr[0].nome, r->arr[0].matricola);
        printf("Studente inserito nel file 'primo.txt'.\n");
    } else {
        printf("Nessun elemento presente nel file 'ordinati.dat'.\n");
    }

    fclose(fout_txt); // Chiudi il file di testo
}

// Funzione per caricare i dati dal file binario
void carica_dati_binario(Registro* r, char* nome_file) {
    FILE* fin_bin = fopen(nome_file, "rb");
    if (fin_bin == NULL) {
        printf("Errore nell'apertura del file binario '%s'.\n", nome_file);
        exit(1);
    }

    // Leggi gli studenti dal file binario, uno alla volta
    int i = 0;
    while (fread(&r->arr[i], sizeof(Studente), 1, fin_bin) == 1) {
        i++;
    }
    r->dl = i; // Imposta la dimensione logica del registro
    fclose(fin_bin); // Chiudi il file binario
}
