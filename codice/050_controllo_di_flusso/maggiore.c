#include <stdio.h>

int main(){
    // definisco le variabili
    int a, b;

    // richiedo i due valori
    printf("Inserisci due numeri interi\n");
    scanf("%d%d", &a,&b);

    // se il primo valore è maggiore del secondo
    if (a > b)
        
        // stampo il primo
        printf("%d\n", a);

    // altrimenti
    else

        // stampo il secondo
        printf("%d\n", b);
}