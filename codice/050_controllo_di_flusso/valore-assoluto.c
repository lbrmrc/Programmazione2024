#include <stdio.h>

int main(){
    int n;
    printf("Inserisci un numero intero con segno\n");
    scanf("%d", &n);
    if (n >= 0)
        printf("%d\n", n);
    else
        printf("%d\n", -n);
}