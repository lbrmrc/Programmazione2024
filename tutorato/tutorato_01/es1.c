#include <stdio.h>

main() {
    int a,b;
    printf("Inserisci il valore di a : \n");
    scanf("%d", &a);
    printf("Inserisci il valore di b : \n");
    scanf("%d", &b);
    int somma, divisione, modulo, incremento, decremento;
    somma = a + b;
    printf("La somma di %d e %d è %d \n", a,b,somma);
    divisione = a / b;
    printf("La divisione tra %d e %d è %d \n", a,b,divisione);
    modulo = a % b;
    printf("Il modulo di %d e %d è %d \n", a,b,modulo);
    // nota bene : gli incrementi e/o decrementi modificano il valore delle variabili 
    // per ripristinare il valore originale salviamo una copia delle variabile 'a' che ci 
    // servirà nel punto successivo 
    int copia_a = a;
    ++a;
    --b;
    printf("Il valore di a è : %d \n", a);
    printf("Il valore di b è : %d \n", b);
    copia_a  += 5;
    a += 5;
    printf("Il valore di a è : %d \n", copia_a);
    printf("Il valore di a con l'incremento è : %d \n", a);
}