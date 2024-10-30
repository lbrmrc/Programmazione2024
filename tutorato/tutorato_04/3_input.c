#include <stdio.h>

main() {

    int num,somma = 0, max = 0, min = 101;
    int i = 0;
    float media =  1.0;
    do {
        printf("utente inserisci un numero : \n");
        scanf("%d", &num); 
        somma += num;
        if ( num > max)
            max = num;
        else if ( num < min)
            min = num;
        if( num != 0)
            i++;
    }while (num != 0);

    media = (float)somma/i;
    printf("la somma è %d \n", somma);
    printf("il minimo è %d \n", min);
    printf("il massimo è %d \n", max);
    printf("la media è %.2f \n", media);
}
