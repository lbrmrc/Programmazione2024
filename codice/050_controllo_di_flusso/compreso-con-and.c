#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  if (a >= 2 && a <= 5)
    printf("Compreso\n");
  else
    printf("Non compreso\n");
}