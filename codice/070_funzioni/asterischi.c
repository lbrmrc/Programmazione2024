#include <stdio.h>

void riga() {
  int j;
  // stampa di una riga
  for (j = 0; j < 20; j++)
    printf("*");
  printf("\n");
}

int main() {
  int i;

  for (i = 0; i < 5; i++)
    riga();

  printf("\n");
  riga();
}