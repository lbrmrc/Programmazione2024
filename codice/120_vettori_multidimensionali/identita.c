#include <stdio.h>
#define DIM 3

void stampa(int m[][DIM]) {
  int i, j;
  for (i = 0; i < DIM; i++) {
    for (j = 0; j < DIM; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}

int main() {
  int m[DIM][DIM]; // = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      if (i == j)
        m[i][j] = 1;
      else
        m[i][j] = 0;
  stampa(m);
}