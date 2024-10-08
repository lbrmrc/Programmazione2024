#include <stdio.h>

int main() {
  int stampati;
  stampati = 0;
asterisco:
  printf("*");
  stampati = stampati + 1;
  if (stampati < 5)
    goto asterisco;
  printf("\n");
}