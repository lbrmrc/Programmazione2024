#include <stdio.h>

int main() {
  int i = 1;
scrivi:
  printf("*");
  i++;
  if (i <= 5)
    goto scrivi;
  printf("\n");
}