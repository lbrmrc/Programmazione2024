#include <stdio.h>
#define DIM 201

int bisestile(int anno) {
  return anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0;
}

int main() {
  int a[DIM];
  int b[DIM];
  int dlb;
  int i;
  for (i = 0; i < DIM; i++)
    a[i] = 1900 + i;
  dlb = 0;
  // b = filter(bisestile,a)
  for (i = 0; i < DIM; i++)
    if (bisestile(a[i])) {
      b[dlb] = a[i];
      dlb++;
    }
  for (i = 0; i < dlb; i++)
    printf("%d ", b[i]);
  printf("\n");
  return 0;
}