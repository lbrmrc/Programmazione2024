#include <stdio.h>
#include <math.h>

int main() {
  float a, x;
  scanf("%f", &a);
  x = 1.0;
  while (fabsf(x * x - a) > 1e-5) {
    x = (x + a / x) / 2.0;
  }
  printf("%f\n", x);
}