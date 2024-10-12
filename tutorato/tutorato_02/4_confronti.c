#include <stdio.h>

main() {
    int a,b;
    
    printf("Inserisci il valore di a: ");
    scanf("%d", &a);

    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    printf("%d >  %d? %d\n", a, b, a >  b);
    printf("%d >= %d? %d\n", a, b, a >= b);
    printf("%d <  %d? %d\n", a, b, a <  b);
    printf("%d <= %d? %d\n", a, b, a <= b);
    printf("%d == %d? %d\n", a, b, a == b);
    printf("%d != %d? %d\n", a, b, a != b);

}