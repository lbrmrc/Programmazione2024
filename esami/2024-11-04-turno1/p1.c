#include <stdio.h>

float va(float x) { return x >= 0.0 ? x : -x; }

float radiceN(float a, int N) {
  float x, p;
  int i;
  x = 1.0;
  do {
    p = 1.0;
    for (i = 0; i < N - 1; i++)
      p *= x;
    x = ((N - 1) * p * x + a) / (N * p);
  } while (va(p * x - a) / a > 1e-5);
  return x;
}

int main() {
  float x;
  int n, i;
  scanf("%f%d", &x, &n);
  for (i = 2; i <= n; i++)
    printf("%f\n", radiceN(x, i));
  return 0;
}