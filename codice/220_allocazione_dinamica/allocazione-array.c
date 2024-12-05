#include <malloc.h>

int *f() {
  int *pa;
  pa = (int *)malloc(sizeof(int) * 5);
  pa[0] = 4;
  pa[1] = 1;
  pa[2] = 8;
  pa[3] = 7;
  pa[4] = 5;
  return pa;
}

int main() {
  int *pa;
  pa = f();
  printf("%d\n", pa[3]);
  free(pa);
  pa = NULL;
}