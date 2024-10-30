#include <stdio.h>

int divisibile(int a, int b) {
  int j;
  while (a > 0) { // COND 1
    for (j = 0; a > 1 && j < b - 1; j++)  
      a--;
    a--;
  }
  return a == 0 && j == b - 1;
}

int main() {
  int M;
  int i;
  printf("Inserisci un numero intero positivo\n");
  scanf("%d", &M);
  for (i = 1; i <= M; i++)
    // Si = 1...M;
    if (divisibile(M, i))
      // Soutput = filter(divisibile(M,i), Si)
      printf("%d ", i);
    printf("\n");
    return 0;
}