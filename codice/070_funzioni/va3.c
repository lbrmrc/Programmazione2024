#include <stdio.h>

int valoreAssoluto(int n) { return n >= 0 ? n : -n; }

int main() {
  printf("%d\n", valoreAssoluto(5));
  printf("%d\n", valoreAssoluto(-5));
  printf("%d\n", valoreAssoluto(0));
  return 0;
}