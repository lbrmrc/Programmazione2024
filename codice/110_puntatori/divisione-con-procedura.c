#include <stdio.h>

void divisione(int dividendo, int divisore, int *p_quoziente, int *p_resto) {
  if (divisore != 0) {
    *p_quoziente = dividendo / divisore;
    *p_resto = dividendo % divisore;
  }
}

int main() {
  int q, r;

  divisione(7, 0, &q, &r);

  printf("%d %d\n", q, r); // stampa 2 1
}