#include <stdio.h>

typedef struct {
  int num;
  int den;
} Frazione;

int num(Frazione f) { return f.num; }

int den(Frazione f) { return f.den; }

Frazione frazione(int n, int d) {
  Frazione f;
  f.num = n;
  f.den = d;
  return f;
}

Frazione leggiFrazione() {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d);
}

void stampaFrazionaria(Frazione f) { printf("%d/%d", num(f), den(f)); }

void stampaDecimale(Frazione f) { printf("%f", (float)num(f) / den(f)); }

int main() {
  Frazione f1, f2;
  f1 = frazione(2, 3);
  f2 = leggiFrazione();
  stampaFrazionaria(f1);
  printf("\n");
  stampaDecimale(f2);
  printf("\n");
}