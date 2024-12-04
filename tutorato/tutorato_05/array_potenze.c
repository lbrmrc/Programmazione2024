#include <stdio.h>
#define DIM 10

int eleva(int base, int esponente);

int main(){
    int i, dl, quadrato;
    int numeri[DIM], elevati[DIM];

    // Inserimento di valori nell'array a
    do{
        printf("Inserisci la dimensione logica dell'array:\n");
        scanf("%d", &dl);
    }while(dl>DIM && dl<=0); // almeno 1 elemento e massimo DIM elementi

    printf("Inserisci i numeri:\n");
    for(i=0; i<dl; i++){
        scanf("%d",&numeri[i]);
        if(numeri[i] % 2 == 0){
            elevati[i] = eleva(numeri[i],2);
        } else {
            elevati[i] = eleva(numeri[i],3);
        }
    }

    printf("\nRisultato:\n");
    for(i=0; i<dl; i++){
        printf("%d ", elevati[i]);
    }

    return 0;
}


int eleva(int base, int esponente){
    int potenza = 1;

    for (int i=1; i<=esponente; i++){
        potenza = potenza * base;
    }

    return potenza;
}