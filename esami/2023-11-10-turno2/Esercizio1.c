#include <stdio.h>

int divisibile(int a, int b) {
  int j;
  while (a > 0) { // COND 1
    j = 0;
    while (a > 1 && j < b - 1) { // COND 2
      a = a - 1;
      j = j + 1;
    }
    a = a - 1;
  }
  if (a == 0 && j == b - 1)
    return 1;
  else
    return 0;
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
      printf("%d\n", i);
}