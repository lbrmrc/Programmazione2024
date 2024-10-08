#include <stdio.h>

main() {
    int a=4;
    int b=7;
    
    printf("Il valore di a è: %d\n", a);
    printf("Il valore di b è: %d\n", b);

    printf("\nScambio!\n");

    int temp = a;
    a = b;
    b = temp;

    printf("Il nuovo valore di a è: %d\n", a);
    printf("Il nuovo valore di b è: %d\n", b);
}