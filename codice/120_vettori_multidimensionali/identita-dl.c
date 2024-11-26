#include <stdio.h>
#define DIM 10

void stampa(int m[][DIM], int Nrighe, int Ncolonne) {
  int i, j;
  for (i = 0; i < Nrighe; i++) {
    for (j = 0; j < Ncolonne; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}

void identita(int m[DIM][DIM], int N) {
  int i, j;
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      if (i == j)
        m[i][j] = 1;
      else
        m[i][j] = 0;
}

int main() {
  int m[DIM][DIM]; // = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

  int N;
  printf("Numero righe e colonne?\n");
  scanf("%d", &N);
  identita(m, N);
  stampa(m, N, N);
}