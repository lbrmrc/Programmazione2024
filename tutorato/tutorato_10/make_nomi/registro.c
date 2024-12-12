#include <stdio.h>
#include <stdlib.h>
#include "registro.h"

// Funzioni di gestione del Registro
void inizializza(Registro *r) {
    r->dl = 0;
}


// funzioni di ordinamento
void ordina(Registro *r) { 
    int i, min, j;
    Studente temp;

    // Ordinamento crescente per matricola
    for (i = 0; i < r->dl; i++) {
        min = i;
        for (j = i + 1; j < r->dl; j++) {
            if (r->arr[j].matricola < r->arr[min].matricola) { 
                min = j;
            }
        }
        // Scambio dei valori
        temp = r->arr[i];
        r->arr[i] = r->arr[min];
        r->arr[min] = temp;
    }
}

// scrittura del file di output TESTUALE
void scrivi_ordinati(Registro *r) {
    FILE* fp = fopen("ordinati.txt", "wt");
    if (fp == NULL) {
        printf("Errore nell'apertura del file di output.\n");
        exit(2);
    }

    for (int i = 0; i < r->dl; i++) {
        fprintf(fp, "%s %s %d\n", r->arr[i].nome, r->arr[i].cognome, r->arr[i].matricola);
    }

    printf("Creato il file ordinati.txt!\n");

    fclose(fp);//NB : chiudere il file alla fine!
}

// scrittura del file di output BINARIO (parte 2)
void scrivi_ordinati_bin(Registro *r) {
    // Aprire il file binario in modalità scrittura ("wb" = write binary)
    FILE* fp = fopen("ordinati.dat", "wb");
    if (fp == NULL) {
        printf("Errore nell'apertura del file di output.\n");
        exit(3);
    }

    // // Scrivere il contenuto dell'array nel file binario elemento per elemento
    // for (int i = 0; i < r->dl; i++) {
    //     // Scrivere ogni struttura dell'array in formato binario
    //     if (fwrite(&r->arr[i], sizeof(r->arr[i]), 1, fp) != 1) {
    //         printf("Errore durante la scrittura nel file binario.\n");
    //         fclose(fp);
    //         exit(4);
    //     }
    // }

    // Scrivere il contenuto dell'array nel file binario tutto insieme
    if (fwrite(r->arr, sizeof(Studente), r->dl, fp) != r->dl) {
        printf("Errore durante la scrittura del file binario.\n");
        fclose(fp);
        exit(4);
    }

    printf("Creato il file ordinati.dat in formato binario!\n");

    fclose(fp);//NB : chiudere il file alla fine!
}


void carica_dati(Registro *r, char* nomefile){
    Studente s;
    FILE* fp = fopen(nomefile, "rt");
    if (fp == NULL) {
        printf("Errore nell'apertura del file di input.\n");
        exit(1);
    }

    // Leggi i dati dal file e aggiungili al registro
    while (fscanf(fp, "%s %s %d", s.cognome, s.nome, &s.matricola) == 3) {
        r->arr[r->dl] = s;
        r->dl++;
        stampaS(s);
    }
    fclose(fp);//NB : chiudere il file alla fine!
}