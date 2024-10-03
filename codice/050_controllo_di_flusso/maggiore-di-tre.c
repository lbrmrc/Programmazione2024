#include <stdio.h>

int main() {
  int a, b, c;
  printf("Inserisci tre numeri interi\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b)
    if (a > c)
      printf("%d\n", a);
    else
      printf("%d\n", c);
  else // b >= a
    if (b > c)
      printf("%d\n", b);
    else
      printf("%d\n", c);
}