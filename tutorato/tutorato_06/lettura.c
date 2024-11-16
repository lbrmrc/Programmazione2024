#include <stdio.h>

int funzione_lettura();

int procedura_lettura(int *pa);

int main() {
  //parte 3)
  int m, n;
  m = funzione_lettura();
  procedura_lettura(&n);
  printf("%d\n", m + n);
  return 0;
}

// parte 1)
int funzione_lettura() {
  int a;
  scanf("%d", &a);
  return a;
}

// parte 2)
int procedura_lettura(int *pa) {
   scanf("%d", pa);
  }
