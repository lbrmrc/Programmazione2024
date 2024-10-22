#include <stdio.h>

main(){
    int num, doppio;

input:
    printf("\nInserisci un numero intero:\n");
    scanf("%d", &num);

    if (num > 0) {
        doppio = num * 2;
        printf("Il doppio di %d è %d.\n", num, doppio);
        goto input; //salta a input
    } 
    
    printf("Fine.\n"); 
} 