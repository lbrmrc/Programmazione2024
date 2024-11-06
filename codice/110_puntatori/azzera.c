#include <stdio.h>

void azzera (int *pm){
    *pm = 0;
}

int main(){
    int m = 3;
    azzera(&m);
    printf("%d\n", m); // stampa 0
    return 0;
}