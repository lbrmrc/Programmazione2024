#include <stdio.h>
#include <stdlib.h>

float rnd_float(float minore, float maggiore) {
  return minore + (float)rand() / RAND_MAX * (maggiore - minore);
}

int main() {
  int i;
  for (i = 0; i < 10; i++)
    printf("%f ", rnd_float(15, 25));
  printf("\n");
}
