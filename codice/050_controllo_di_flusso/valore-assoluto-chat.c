#include <stdio.h>

int main() {
  int n;
  printf("Inserisci un numero intero (positivo o negativo):\n");
  scanf("%d", &n);
  if (n < 0)
    n = -n;
  printf("Il valore assoluto è: %d\n", n);
}