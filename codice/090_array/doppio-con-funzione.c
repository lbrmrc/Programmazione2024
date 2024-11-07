#include <stdio.h>
#define DIM 5

int f(int d) { return d * 2; }

int main(void) {
  int i, a[] = {2, 4, 1, 6, 2}, b[5];

  // b = map(f, a)
  for (i = 0; i < DIM; i++) {
    b[i] = f(a[i]);
  }
  return 0;
}
