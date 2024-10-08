#include <stdio.h>

int main() {
  int stampati;
  stampati = 0;
  do {
    printf("*");
    stampati = stampati + 1;
  } while (stampati < 5);
  printf("\n");
}