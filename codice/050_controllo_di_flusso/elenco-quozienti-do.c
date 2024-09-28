#include <stdio.h>

int main() {
  int i = 1;
  do {
    printf("%d\n", 100 / i);
    i++;
  } while (i <= 10);
}