#include <stdio.h>

main () {
    int x1, y1, x2, y2, x3, y3;

    printf("Inserire le coordinate dei tre punti: \n");
    printf("\tPrimo punto: ");
    scanf("%d %d", &x1, &y1);
    printf("\tSecondo punto: ");
    scanf("%d %d", &x2, &y2);
    printf("\tTerzo punto: ");
    scanf("%d %d", &x3, &y3);

    /* Casi di vittoria:
        1. Diagonale AltoSx -> BassoDx 
        2. Fila Orizzontale
        3. Fila Verticale
        4. Digonale AltoDX -> BassoSx
    */
    if( 
        (x1+y1==4 && x2+y2==4 && x3+y3==4) || // caso 1
        (x1==x2 && x2==x3)|| // caso 2
        (y1==y2 && y2==y3)|| // caso 3
        (x1==y1 && x2==y2 && x3==y3) // caso 4
    ){
        printf("VITTORIA! :D\n");
    } else {
        printf("SCONFITTA :(\n");
    }
}
