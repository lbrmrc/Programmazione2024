#include <stdio.h>

main() {
    int km, mm, cm, dm, m;
    
    printf("Inserisci il valore dei chilometri: ");
    scanf("%d", &km);

    mm = km * 1e6; // equivale a scrivere km * 1e+6 oppure km * 1000000 : la cifra dopo la e è il numero di zeri
    cm = km * 1e5;
    dm = km * 1e4;
    m  = km * 1000;
   
    printf("%dkm equivalgono a:\n", km);
    printf("\t- %dmm\n", mm);
    printf("\t- %dcm\n", cm);
    printf("\t- %ddm\n", dm);
    printf("\t- %dm\n",   m);
}