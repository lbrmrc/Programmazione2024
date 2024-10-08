#include <stdio.h>
int main() {
  int a;
doppio:
  scanf("%d", &a);
  if (a >= 0) {
    printf("%d\n", a * 2);
    goto doppio;
  }
  printf("Fine\n");
}