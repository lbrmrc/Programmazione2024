#include <stdio.h>

main () {
    int a, b, div, resto;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    if(b != 0){
        div = a/b;
        resto = a%b;
        printf("Il risultato è %d\n.", div);

        if(resto == 0){
            printf("I due numeri sono divisibili.\n");
        } else {
            printf("I due numeri non sono divisibili: il resto è %d\n.", resto);
        }      
    } else {
        printf("ERRORE!\n");
    }
}
