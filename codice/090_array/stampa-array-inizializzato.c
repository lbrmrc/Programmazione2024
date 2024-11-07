#include <stdio.h>

int main() {
  int a[5] = {2, 5, -1, 4, 0}; // definizione array
  int i;                       // indice dell'array

  for (i = 0; i < 5; i++)
    printf("%d\n", a[i]);
  return 0;
}