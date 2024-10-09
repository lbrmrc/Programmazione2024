#include <stdio.h>

int main() {
  int i;
  for (i = 1; i <= 20; i++) {
    // i assume i valori di Si = 1, 2, 3,...20
    if (i % 2 == 0) {
        // i assume i valori di filter(pari, Si) = 2, 4, 6, 8, 10... 20
      printf("%d\n", i);
    }
  }
}