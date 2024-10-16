#include <stdio.h>

main() {
    int a, b;
    
    printf("Inserisci il valore di a: ");
    scanf("%d", &a);

    b = a;
    printf("Il valore di b è %d\n", b);

    printf("\nIncremento prefisso di a: %d\n", ++a);

    printf("\nRipristino a = %d\n", b);
    a = b;

    printf("\nIncremento postfisso di a: %d\n", a++);
    printf("Il valore di a dopo l'incremento postfisso è: %d\n", a);

    printf("\nRipristino a = %d\n", b);
    a = b;

    printf("\nDecremento prefisso di a: %d\n", --a);
    printf("Il valore di a dopo il decremento postfisso è: %d\n", a);

    printf("\nRipristino a = %d\n", b);
    a = b;

    printf("\nDecremento postfisso di a: %d\n", a--);
}