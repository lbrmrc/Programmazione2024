#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  if (a >= 2)
    if (a <= 5)
      printf("Compreso\n");
    else
      printf("Non compreso\n");
  else
    printf("Non compreso\n");
}