// stampa 100 interi casuali compresi fra 0 e 50
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intero_casuale(int minimo, int massimo) {
  return minimo + rand() % (massimo - minimo + 1);
}

int main() {
    int i;
    srand(time(NULL));
    for (i = 0; i <100; i++)
        printf("%d ", intero_casuale(0, 50));
    printf("-1 ");
    printf("\n");
    return 0;
}