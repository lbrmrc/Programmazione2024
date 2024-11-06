#include <stdio.h>

void swap(int *pm, int *pn){
    int t = *pm;
    *pm = *pn;
    *pn = t;
}

void ordina(int *pa, int *pb){
    if (*pa > *pb)
        swap(pa, pb);
}

int main(){
    int a, b;
    printf("Inserisci due interi\n");
    scanf("%d%d", &a, &b);
    ordina(&a, &b);
    printf("%d %d\n", a, b); // a <= b
}