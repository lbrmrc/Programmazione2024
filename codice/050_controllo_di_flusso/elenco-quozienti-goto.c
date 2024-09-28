#include <stdio.h>

int main() {
  int i = 1;
ciclo:
  printf("%d\n", 100 / i);
  i++;
  if (i <= 10)
    goto ciclo;
}