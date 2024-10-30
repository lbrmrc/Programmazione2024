#include <stdio.h>

int main(void) {
  int a = 0;
  do {
    if (a % 3)
      a += 4;
    else
      a += 5;
  } while (1);
  return 0;
}