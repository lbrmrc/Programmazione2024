#include <stdio.h>

main() {
    int esito;

    printf("Inserire l'esito dell'esame: ");
    scanf("%d", &esito);

    if(esito < 18)
        printf("Insufficiente\n");
    else if(18 <= esito && esito <= 20)
        printf("Sufficiente\n");
    else if(21 <= esito && esito <=23)
        printf("Discreto\n");
    else if(24 <= esito && esito <=26)
        printf("Buono\n");
    else if(27 <= esito && esito <=29)
        printf("Distinto\n");
    else if(30 <= esito && esito <=32)
        printf("Ottimo\n");
    else
        printf("Esito non valido\n");
}
