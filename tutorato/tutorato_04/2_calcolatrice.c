#include<stdio.h>

main(){
    int a,b;
    char operazione;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    while(a != 0 || b != 0){
        printf("Inserisci l'operazione: ");
        scanf(" %c", &operazione); // NB: lo spazio prima di %c serve perché altrimenti viene letto il precedente invio (\n)

        switch(operazione) {
            case '+':
                printf("%d %c %d = %d", a, operazione, b, a+b);
                break;
            case '-':
                printf("%d %c %d = %d", a, operazione, b, a-b);
                break;
            case '*':
                printf("%d %c %d = %d", a, operazione, b, a*b);
                break;
            case '/':
                if (b != 0) printf("%d %c %d = %d", a, operazione, b, a/b);
                else printf("Divisione per 0");
                break;
            case '%':
                if (b != 0) printf("%d %c %d = %d", a, operazione, b, a%b);
                else printf("Divisione per 0");
                break;
            case 'd':
                if (b != 0) printf("%d %c %d = %.2f", a, operazione, b, (float)(a)/(float)(b));
                else printf("Divisione per 0");
                break;
            default:
                printf("Operazione non valida.\n");
        }

        printf("\n--------------\n");

        printf("Inserisci il valore di a: ");
        scanf("%d", &a);
        printf("Inserisci il valore di b: ");
        scanf("%d", &b);
    }
}