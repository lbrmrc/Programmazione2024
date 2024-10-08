#include <stdio.h>

main() {
    int giorni, settimane, mesi, anni;
    const int giorni_in_anno = 365;
    const int giorni_in_mese = 30;
    const int giorni_in_settimana = 7;
    
    printf("Inserisci il numero di giorni: ");
    scanf("%d", &giorni);

    anni = giorni/giorni_in_anno; 
    mesi = giorni/giorni_in_mese; 
    settimane = giorni/giorni_in_settimana;

    printf("\nGiorni inseriti: %d\n", giorni);
    printf("Settimane: %d\n", settimane);
    printf("Mesi: %d\n", mesi);
    printf("Anni: %d \n", anni);
}