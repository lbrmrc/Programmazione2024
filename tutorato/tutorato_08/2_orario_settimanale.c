#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLOT 4
#define GIORNI 5
#define DIM 50

// V1: creo una struct contenente un solo campo (una stringa)
typedef struct {
    char nome[DIM];
} Lezione;

char giorni[GIORNI][15] = {"Lunedì   ", "Martedì  ", "Mercoledì", "Giovedì  ", "Venerdì  "};


void creaNuovoOrario(Lezione orario[GIORNI][SLOT]);
void stampaOrarioCompleto(Lezione orario[GIORNI][SLOT]);
void stampaOrarioGiornaliero(Lezione orario[GIORNI][SLOT]);
void modificaOrario(Lezione orario[GIORNI][SLOT]);

int main(){

    Lezione orario[GIORNI][SLOT]; //supponendo di avere 4 slot da 2h dalle 9 alle 18 con pranzo dalle 13 alle 14, per 5 giorni
    char giorno[DIM];
    char scelta;
    
    creaNuovoOrario(orario);
    stampaOrarioCompleto(orario);

    do{
        printf("\nCosa vuoi fare (q per uscire)?\n");
        printf("\ta. Stampare l'orario completo\n");
        printf("\tb. Stampare l'orario di un giorno\n");
        printf("\tc. Modifica l'orario\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        switch (scelta){
        case 'a':
            stampaOrarioCompleto(orario);
            break;

        case 'b':
            stampaOrarioGiornaliero(orario);
            break;

        case 'c':
            modificaOrario(orario);
            break;

        case 'q':
            break;
        
        default:
            printf("Scelta non valida.");
            break;
        }
        
        printf("\n\n");

    }while(scelta != 'q');
}

void creaNuovoOrario(Lezione orario[GIORNI][SLOT]){
    int innerIndex, outerIndex;
    Lezione l = {"Vuoto"};

    for(outerIndex=0; outerIndex<GIORNI; outerIndex++){
        for(innerIndex=0; innerIndex<SLOT; innerIndex++){
            orario[outerIndex][innerIndex] = l;
        }
    }
}

void stampaOrarioCompleto(Lezione orario[GIORNI][SLOT]){
    int innerIndex, outerIndex;

    printf("GIORNO\t\tSLOT 1\t\tSLOT 2\t\tSLOT 3\t\tSLOT 4\t\t");
    for(outerIndex=0; outerIndex<GIORNI; outerIndex++){
        printf("\n%s\t",giorni[outerIndex]);
        for(innerIndex=0; innerIndex<SLOT; innerIndex++){
            printf("%s\t\t",orario[outerIndex][innerIndex].nome);
        }
    }
    printf("\n");
}

void stampaOrarioGiornaliero(Lezione orario[GIORNI][SLOT]){
    int gg, i;

    printf("Di quale giorno si vuole stampare l'orario (0=Lunedì)? ");
    scanf("%d", &gg);

    if(gg > 4){
        printf("Scelta del giorno (%d) non valida.\n", gg);
        return;
    }

    printf("GIORNO\t\tSLOT 1\t\tSLOT 2\t\tSLOT 3\t\tSLOT 4\t\t");
    printf("\n%s\t",giorni[gg]);
    for(i=0; i<SLOT; i++){
        printf("%s\t\t",orario[gg][i].nome);
    }
    printf("\n");
}

void modificaOrario(Lezione orario[GIORNI][SLOT]){
    int slot, giorno;
    Lezione l;

    printf("\n*** Modifica Orario ***\n");

    printf("Inserisci il giorno(0=Lunedì) ");
    scanf("%d", &giorno);
    if(giorno > 4){
        printf("Scelta del giorno (%d) non valida.\n", giorno);
        return;
    }
    printf("Inserisci lo slot(0 = SLOT 1) ");
    scanf("%d", &slot);
    if(slot > 3){
        printf("Scelta dello slot (%d) non valida.\n", slot);
        return;
    }
    printf("Inserisci il nome della lezione: ");
    scanf("%s", l.nome);

    printf("Stai inserendo %s nello slot %d del giorno %d\n", l.nome, slot, giorno);

    orario[giorno][slot] = l;

    printf("*** Orario modificato ***\n");

    stampaOrarioCompleto(orario);
}