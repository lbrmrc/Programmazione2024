#include <stdio.h>

int valoreAssoluto(int n) {
  if (n < 0)
    n = -n;
  return n;
}

int main() {
  int x;
  scanf("%d", &x);
  printf("%d\n", valoreAssoluto(x));
}
