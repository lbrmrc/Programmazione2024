#include <stdio.h>

int main(void) {
  int a = 1000000;
  while (a > 0) {
    if (a % 2)
      a /= 2;
    else
      a /= 3;
  }
  return 0;
}