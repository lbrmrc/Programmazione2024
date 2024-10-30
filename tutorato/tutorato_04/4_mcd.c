#include <stdio.h>

main(){
    int a, b, r, magg, min;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    // Poiché deve essere 0 <= b < a, nel caso in cui l'utente si sbagliasse, aggiustiamo a e b
    if(a>b){
        magg=a;
        min=b;
    }
    else{
        magg=b;
        min=a;
    }

    while(min!=0){
        r=magg%min;
        magg=min;
        min=r;
    }
    
    printf("mcd(%d,%d)=%d\n",a,b,magg);
}