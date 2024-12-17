#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

int main() {
    Lista l = NULL;
    int numero;
    Dato d;

    do{
        printf("Inserisci un numero: ");
        scanf("%d",&numero);

        if(numero>0){
            d.value = numero;
            insTesta(&l,d);
            // inserimentoCoda(&l,d);
        }
    } while(numero>0);

    printf("\n\nLista: ");
    stampa(l);

    int len = lunghezza(l);
    printf("La lista è lunga %d\n", len);

    int s = somma(l);
    printf("La somma degli elementi della lista è %d\n", s);

    int el;
    printf("\n\nInserisci il numero da eliminare: ");
    scanf("%d",&el);
    elimTutti(&l,el);
    printf("\nLista senza %d: ",el);
    stampa(l);
    
    return 0;
}