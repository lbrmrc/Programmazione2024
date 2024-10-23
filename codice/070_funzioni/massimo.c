#include <stdio.h>

int massimo(int a, int b) {
  if (a >= b)
    return a;
  else
    return b;
}

int main() {
  printf("%d\n", massimo(2, 3));
  printf("%d\n", massimo(3, 2));
  printf("%d\n", massimo(3, 3));
}