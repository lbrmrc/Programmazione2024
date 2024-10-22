#include <stdio.h>

main(){
    int r, c;

    printf("Inserire la riga:\n");
    scanf("%d", &r);

    printf("Inserire la colonna:\n");
    scanf("%d", &c);

    if(r>8 || r<1 || c>8 || c<1){
        printf("Le coordinate inserite non corrispondono a punti sulla scacchiera\n");
    } else {
        // Una casella è bianca se la riga e la colonna sono essere entrambe pari o entrambe dispari
        // (r%2==0 && c%2==0) => entrambe pari
        // (r%2!=0 && c%2!=0) => entrambe dispari
        if( (r%2==0 && c%2==0) || (r%2!=0 && c%2!=0) )
            printf("Casella bianca\n");
        else
            printf("Casella nera\n");
    }
}