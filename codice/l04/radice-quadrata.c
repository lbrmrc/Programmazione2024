#include <math.h>
#include <stdio.h>

float media(float x, float y) { return (x + y) / 2; }

float radq(float m) {
  float z;
  z = 1.0;
  while (fabsf(z * z - m) > 1e-5)
    z = media(z, m / z);
  return z;
}

int main() {
  float a;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a < 0) {
    printf("%f e` negativo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radq(a));
  return 0;
}