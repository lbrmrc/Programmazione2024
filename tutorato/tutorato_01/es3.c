#include <stdio.h>

main() {
    const int giorni_in_anno = 365;
    const int giorni_in_settimana = 7;

    int num, anni, settimane, giorni;
    printf("Inserisci il numero dei giorni: \n");
    scanf("%d", &num);
    int resto_giorni; // la uso per ottenere il resto della divisione per 365, ovvero i giorni rimanenti che non completano l'anno (< 365)
    anni = num / giorni_in_anno;
    resto_giorni = num % giorni_in_anno;
    settimane = resto_giorni / giorni_in_settimana;
    giorni = resto_giorni % giorni_in_settimana; // ottengo i giorni rimanenti che non completano la settimana  (< 7)
    printf("Stampiamo gli anni : %d \nLe settimane : %d \nI giorni : %d \n", anni, settimane, giorni);
}