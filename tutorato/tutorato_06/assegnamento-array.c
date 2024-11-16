#include <stdio.h>
#define DIM 10

// 1)
void assegna(int *pn, int v);

int main(){
    //2)
    int a[DIM];
    int valore, i;
    // 3) 
    scanf("%d", &valore);
    for (i = 0; i < DIM; i++)
        assegna(&a[i], valore);
    // 4)
    for (i =0 ; i < DIM; i++)
        printf("%d\n", a[i]);
    return 0;
}

void assegna(int *pn, int v){
    *pn = v;
}