#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd_int(int minore, int maggiore) {
  return minore + rand() % (maggiore - minore + 1);
}

int lancio_dado() { return rnd_int(1, 6); }

int main() {
  int i;
  printf("%d\n", RAND_MAX);
  srand(time(NULL));
  for (i = 0; i < 10; i++)
    printf("%d ", lancio_dado());
  printf("\n");
  return 0;
}