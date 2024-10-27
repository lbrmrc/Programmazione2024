#include <stdio.h>

int valoreAssoluto(int n) {
  if (n >= 0)
    return n;
  else
    return -n;
}

int main() {
  printf("%d\n", valoreAssoluto(5));
  printf("%d\n", valoreAssoluto(-5));
  printf("%d\n", valoreAssoluto(0));
  return 0;
}