#include <stdio.h>

int main() {
  int i; // indice di riga
  int j; // indice di colonna
  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++)
      printf("%3d ", i * j);
    printf("\n");
  }
}