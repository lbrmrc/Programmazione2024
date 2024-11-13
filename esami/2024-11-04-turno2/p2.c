#include <stdio.h>

int palindromo(int n) {

  int o, r, t, i;
  o = n;
  r = 0;
  while (n != 0) {
    t = 0;
    for (i = 0; i < 10; i++) {
      t += r;
    }
    r = t + n % 10;
    n /= 10;
  }

  return o == r;
}

int main() {
  int M, i, s;
  scanf("%d", &M);
  s = 0;
  for (i = 1; i <= M; i++)
    if (palindromo(i))
      s += i;
  printf("%d\n", s);
  return 0;
}