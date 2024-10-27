#include <stdio.h>

main(){
    int misura;
    float mis_conv;
    char scelta;
    const float conv_miglia = 0.621371;
    const float conv_libbre = 2.20462;

    do{
        printf("\nScegli il tipo di conversione ('l' per lunghezza, 'm' per massa, 'q' per uscire): ");
        scanf(" %c", &scelta);

        if(scelta!='q'){
            printf("Inserisci la misura: ");
            scanf("%d", &misura);

            if(scelta=='l'){
                mis_conv = misura * conv_miglia;
                printf("%d chilometri corrispondo a %.2f miglia\n", misura,mis_conv);
            } else if(scelta=='m'){
                mis_conv = misura * conv_libbre;
                printf("%d chili corrispondo a %.2f libbre\n", misura,mis_conv);
            } else {
                printf("Scelta non valida.\n");
            }
        }
    }while(scelta!='q');
}