#include <stdio.h>
// Soluzione alternativa
main() {
    int giorni, giorni_rimanenti, settimane, anni;
    const int giorni_in_anno = 365;
    const int giorni_in_settimana = 7;
    
    printf("Inserisci il numero di giorni: ");
    scanf("%d", &giorni);

    anni = giorni/giorni_in_anno; 
    settimane = (giorni % giorni_in_anno)/giorni_in_settimana;
    giorni_rimanenti = giorni - ((anni*giorni_in_anno) + (settimane*giorni_in_settimana));


    printf("\n%d giorni totali corrispondono a:\n", giorni);
    printf("\tAnni: %d \n", anni);
    printf("\tSettimane: %d\n", settimane);
    printf("\tGiorni: %d\n", giorni_rimanenti);
}