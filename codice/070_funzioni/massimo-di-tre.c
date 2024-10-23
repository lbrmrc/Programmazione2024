#include <stdio.h>

int massimo(int a, int b) {
  if (a >= b)
    return a;
  else
    return b;
}

int massimo3(int a, int b, int c) { return massimo(c, massimo(a, b)); }

int main() {
  printf("%d\n", massimo3(2, 3, 5));
  printf("%d\n", massimo3(3, 5, 2));
  printf("%d\n", massimo3(5, 3, 3));
}