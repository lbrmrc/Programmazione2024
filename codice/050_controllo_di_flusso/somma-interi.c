#include <stdio.h>

int main() {
  int s, i, n;
  do {
    printf("Inserisci un numero positivo\n");
    scanf("%d", &n);
  } while (n <= 0);
  s = 0;
  for (i = 1; i <= n; i++)
    s = s + i;
  printf("La somma e` %d\n", s);
}