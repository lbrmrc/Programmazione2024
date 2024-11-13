#include <stdio.h>

int f(int n) {
  if (n > 1)
    return f(n / 5);
  else
    return 0;
}

int main(void) {
  int M;
  scanf("%d", &M);
  M = f(M);
  return M;
}