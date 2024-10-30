#include <stdio.h>

main(){
    int n, num;
    int reversed, digit;

    printf("Inserire un numero\n");
    scanf("%d", &n);

    num = n; // salviamo il numero originale inserito dall'utente
    reversed = 0;

    while(num>0){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
        printf("\ndigit = %d", digit);
        printf("\nreversed = %d", reversed);
        printf("\nnum = %d", num);
        printf("\n\n");
    }

    if(n==reversed)
        printf("%d è palindromo",n);
    else
        printf("%d non è palindromo",n);
}