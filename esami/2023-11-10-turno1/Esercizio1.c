#include <stdio.h>

float va(float z) {
  if (z < 0)
    return -z;
  else
    return z;
}

float radice(float S) {
  float x, a, b;
  x = 1.0;

  while (va(x * x - S) / S > 1e-5) {
    a = (S - x * x) / (2 * x);
    b = x + a;
    x = b - a * a / (2 * b);
  }
  return x;
}

int main() {
  printf("%f\n", radice(2.0));
  return 0;
}