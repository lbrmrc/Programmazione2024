#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM];
  int i;
  int p; // accumulatore

  // a = map(id, Sinput)
  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);

  // p = reduce (*, 1, a)
  p = 1;
  for (i = 0; i < DIM; i++)
    p = p * a[i];
}