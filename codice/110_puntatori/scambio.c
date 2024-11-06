#include <stdio.h>

void swap(int x, int y) {
  int t;
  t = x;
  x = y;
  y = t;
}

int main() {
  int a;
  int b;
  a = 2;
  b = 3;
  printf("%d %d\n", a, b);
  swap(a, b);
  printf("%d %d\n", a, b);
}