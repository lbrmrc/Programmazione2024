#include <stdio.h>

int main() {
  int i;
  for (i = 1; i <= 10; i++) {
    // i assume la sequenza di valori Si = 1, 2, 3, ... 10

    // map (2*, Si) 
    printf("%d\n", 2 * i); // assume i valori 2, 4, 6, ... 20
  }
}