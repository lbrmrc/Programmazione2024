#include <stdio.h>

int main() {
  int n;
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  while (n > 0) {
    printf("%d", n % 10);
    n = n / 10;
  }
  printf("\n");
}