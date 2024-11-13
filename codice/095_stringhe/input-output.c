#include <stdio.h>

int main(){
    char luogo[30];
    int i;
    printf("Inserisci il tuo luogo di nascita\n");
    scanf("%s", luogo);
    for (i = 0; i < 10; i++)
        printf("%s\n", luogo);
    return 0;
}