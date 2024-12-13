#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONT 100
#define DIMSTR 20

typedef struct {
    char nome[DIMSTR];
    char cognome[DIMSTR];
    int numero;
} Contatto;

typedef struct {
    Contatto arr[MAXCONT];
    int dl;
} Registro;

// Funzioni per la gestione del Registro
void inizializza(Registro *r);
void leggiRubrica(char* fileName, Registro* reg);
void salvaRubrica(char* fileName, Registro* reg);
void inserisciNuovoContatto(Registro* reg);
void cercaContatto(Registro* reg);
void ordinaRubrica(Registro* reg);
void stampaContatto(Contatto c); // perchè non ci sono i puntatori? Perchè stampa serve solo a visualizzare qualcosa, non mi serve accedere all'area di memoria per modificare il contenuto di una struttura!
void stampaRubrica(Registro reg); 

int main() {
    char scelta;
    char fileName[] = "rubrica.txt";
    Registro rubrica;

    inizializza(&rubrica);
    leggiRubrica(fileName, &rubrica);

    do {
        printf("Cosa vuoi fare (q per uscire)?\n");
        printf("\ta. Inserisci un nuovo contatto in rubrica\n");
        printf("\tb. Cerca un contatto in rubrica\n");
        printf("\tc. Mostra tutti i contatti in rubrica\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        switch (scelta) {
            case 'a':
                inserisciNuovoContatto(&rubrica);
                salvaRubrica(fileName, &rubrica);
                break;
            case 'b':
                cercaContatto(&rubrica);
                break;
            case 'c':
                stampaRubrica(rubrica);
                break;
            case 'q':
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }

        printf("\n\n");
    } while (scelta != 'q');

    return 0;
}


void inizializza(Registro *r){
  r->dl = 0;
}

void inserisciNuovoContatto(Registro* reg) {
    if (reg->dl < MAXCONT) {
        Contatto c;
        printf("Inserisci il nome: "); // NB posso spezzare l'inserimento solo perchè l'input viene da terminale, nella lettura dei file invece è sconsigliato!
        scanf("%s", c.nome);
        printf("Inserisci il cognome: ");
        scanf("%s", c.cognome);
        printf("Inserisci il numero: ");
        scanf("%d", &c.numero);

        reg->arr[reg->dl++] = c;
        printf("Contatto aggiunto con successo.\n");
    } else
        printf("Rubrica piena, impossibile aggiungere un nuovo contatto.\n");
}

void leggiRubrica(char* fileName, Registro* reg) {
    FILE* fin = fopen(fileName, "r");
    if (fin == NULL) {
        printf("File non trovato, inizializzazione rubrica vuota.\n");
        exit(3);
    }

    while (fscanf(fin, "%s %s %d", reg->arr[reg->dl].nome, reg->arr[reg->dl].cognome, &reg->arr[reg->dl].numero) == 3) { // ho letto una riga
        printf("Ho letto: ");
        stampaContatto(reg->arr[reg->dl]);
        reg->dl++; // incremento il contatore degli elementi del registro
    }

    fclose(fin);
}

void salvaRubrica(char* fileName, Registro* reg) {
    FILE* fout = fopen(fileName, "w");
    if (fout == NULL) {
        printf("Errore nell'apertura del file per il salvataggio.\n");
        exit(1);
    }

    ordinaRubrica(reg);

    for (int i = 0; i < reg->dl; i++) {

        if (fprintf(fout, "%s %s %d\n", reg->arr[i].nome, reg->arr[i].cognome, reg->arr[i].numero) < 0)
            {
                printf("Errore di scrittura del file!\n");
                exit(2);
            }
    }

    fclose(fout);
}

void cercaContatto(Registro* reg) {
    char trovaCognome[DIMSTR];
    printf("Inserisci il cognome da cercare: ");
    scanf("%s", trovaCognome);

    int trovato = 0;
    for (int i = 0; i < reg->dl; i++) {
        if (strcmp(reg->arr[i].cognome, trovaCognome) == 0) {
            printf("Trovato:\n");
            stampaContatto(reg->arr[i]);
            trovato = 1;
        }
    }

    if (!trovato) {
        printf("Nessun contatto trovato con il cognome specificato.\n");
    }
}

void ordinaRubrica(Registro* reg) {
    for (int i = 0; i < reg->dl - 1; i++) {
        for (int j = i + 1; j < reg->dl; j++) {
            if (strcmp(reg->arr[i].cognome, reg->arr[j].cognome) > 0) {
                Contatto temp = reg->arr[i];
                reg->arr[i] = reg->arr[j];
                reg->arr[j] = temp;
            }
        }
    }
}

void stampaContatto(Contatto c) {
    printf("| %s\t| %s\t| %d\t|\n", c.nome, c.cognome, c.numero);
}

void stampaRubrica(Registro reg) {  // se non ho un puntatore non devo usare la notazione "->""
    printf("| Nome\t| Cognome\t| Numero\t|\n");
    printf("-----------------------------------\n");
    for (int i = 0; i < reg.dl; i++) {
        stampaContatto(reg.arr[i]);
    }
}
