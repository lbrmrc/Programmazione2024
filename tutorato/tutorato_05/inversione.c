#include<stdio.h>

#define DIM 20

int main(){
    char parola[DIM], invertita[DIM];
    int n, i, j;

    printf("Inserire una stringa massimo %d caratteri:\n", DIM);
    scanf("%s", parola);

    // Calcolo della lunghezza effettiva della parola
    n = 0;
    while(parola[n] != '\0'){
        n++;
    }

    j = 0;
    for(i=n-1; i>=0; i--){
        invertita[j] = parola[i];
        j++;
    }
    invertita[j] = '\0'; // stringa ben formata
    printf("La parola invertita è: %s\n", invertita);


    // Alternativa: stampa direttamente a video scorrendo la parola al contrario
    /* 
    printf("La parola invertita è: ");
    for(i=n-1; i>=0; i--){
        printf("%c", parola[i]);
    }
    printf("\n");
    */

    return 0;
}