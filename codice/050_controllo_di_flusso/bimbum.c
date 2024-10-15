#include <stdio.h>

int main() {
  int i;
  for (i = 1; i <= 100; i++) {
    if (i % 3 != 0 && i % 5 != 0)
      printf("%d ", i);
    else {
      if (i % 3 == 0)
        printf("bim");
      if (i % 5 == 0)
        printf("bum");
      printf(" ");
    }
  }
  printf("\n");
}