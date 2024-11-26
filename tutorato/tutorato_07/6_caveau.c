#include <stdio.h>
#define DIM 20

typedef struct {
    int  valore;
    char nome[DIM];
} pietra;

void ordina(pietra a[], int n);

int main(){
    pietra arrayPietre[DIM];
    int k, n, i;

    printf("Inserisci il numero di pietre presenti nel caveau: n = ");
    scanf("%d", &n);

    printf("Inserisci il numero di pietre che il ladro riesce a tenere in mano: k = ");
    scanf("%d", &k);

    printf("Inserisci le pietre presenti nel caveau:\n");
    for(i=0; i<n; i++){
        printf("\nNome: ");
        scanf("%s", arrayPietre[i].nome);

        printf("Valore: ");
        scanf("%d", &arrayPietre[i].valore);
    }

    ordina(arrayPietre, n);

    printf("\nIl ladro porta via le seguenti %d pietre:\n", k);
    for(i=0; i<k; i++){
        printf("- %s (%d)\n", arrayPietre[i].nome, arrayPietre[i].valore);
    }

    return 0;
}

void ordina(pietra a[],int n){ 
    int i,max,j;
    pietra temp;

    // ordinamento DEcrescente (dalla più preziosa alla meno preziosa)
    for(i=0; i<n; i++){
        max = i;
        for(j=i+1; j<n; j++){ // controllo se esiste un altro elemento di valore maggiore nel resto dell'array
            if(a[j].valore > a[max].valore){ // se trovo un elemento j di valore maggiore...
                max = j; // ... questo diventa il nuovo max
            }
        }
        // il nuovo max deve prendere il posto del max precedente => swap
        temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
}