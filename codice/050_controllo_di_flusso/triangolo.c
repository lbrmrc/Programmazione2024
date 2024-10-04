#include <stdio.h>

int main() {
  int a, b, c;
  printf("Inserisci le lunghezze dei tre lati\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a == b && b == c)
    printf("Equilatero\n");
  else if (a == b || b == c || a == c)
    printf("Isoscele\n");
  else
    printf("Scaleno\n");
}