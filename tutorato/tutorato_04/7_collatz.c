#include <stdio.h>

main(){
    int a,b,i,n, nCicli;

    printf("Inserire il valore iniziale:\n");
    scanf("%d", &a);

    printf("Inserire il valore finale;\n");
    scanf("%d",&b);

    for(i=a;i<=b;i++){
        n=i;
        nCicli=0;

        while(n!=1){
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            nCicli++;
        }
        printf("Numero %d\n Numero Cicli %d\n\n",i, nCicli);
    }
}