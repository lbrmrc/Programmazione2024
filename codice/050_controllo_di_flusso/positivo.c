#include <stdio.h>

int main(){
    // definisco una variabile intera n
    int n;

    // scrivo all'utente di inserire un numero intero
    printf("Inserisci un numero intero\n");

    // leggo da tastiera il numero intero inserito dall'utente e lo scrivo nella variabile n
    scanf("%d", &n);

    // se n è maggiore di 0
    if (n > 0)

    // stampo il messaggio "positivo"
        printf("positivo\n");
}