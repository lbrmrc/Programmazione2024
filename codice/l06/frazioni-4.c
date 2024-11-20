#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int num;
  int den;
} Frazione;

int mcd(int a, int b) {
  if (a < 0)
    a = -a;
  if (b < 0)
    b = -b;
  while (a != b)
    if (a > b)
      a = a - b;
    else
      b = b - a;
  return a;
}

int num(Frazione f) { return f.num; }

int den(Frazione f) { return f.den; }

Frazione frazione(int n, int d) {
  Frazione f;
  int m;
  if (d == 0) {
    printf("Errore: divisione per 0\n");
    exit(1);
  }
  m = n != 0 ? mcd(n, d) : 1;
  f.num = n / m;
  f.den = d / m;
  return f;
}

Frazione leggiFrazione() {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d);
}

void stampaFrazionaria(Frazione f, char *s) {
  sprintf(s, "%d/%d", num(f), den(f));
}

void stampaDecimale(Frazione f) { printf("%f", (float)num(f) / den(f)); }

Frazione somma(Frazione f1, Frazione f2) {
  return frazione(num(f1) * den(f2) + num(f2) * den(f1), den(f1) * den(f2));
}

Frazione opposto(Frazione f) { return frazione(-num(f), den(f)); }

Frazione differenza(Frazione f1, Frazione f2) { return somma(f1, opposto(f2)); }

Frazione prodotto(Frazione f1, Frazione f2) {
  return frazione(num(f1) * num(f2), den(f1) * den(f2));
}

Frazione inverso(Frazione f) { return frazione(den(f), num(f)); }

Frazione quoziente(Frazione f1, Frazione f2) {
  return prodotto(f1, inverso(f2));
}

int main() {
  Frazione f1, f2;
  char s1[30], s2[30], sr[30];
  printf("Inserisci numeratore e denominatore di due frazioni\n");
  f1 = leggiFrazione();
  f2 = leggiFrazione();

  stampaFrazionaria(f1, s1);
  stampaFrazionaria(f2, s2);
  stampaFrazionaria(somma(f1, f2), sr);
  printf("%s + %s = %s\n", s1, s2, sr);
  stampaFrazionaria(differenza(f1, f2), sr);
  printf("%s + %s = %s\n", s1, s2, sr);
  stampaFrazionaria(prodotto(f1, f2), sr);
  printf("%s + %s = %s\n", s1, s2, sr);
  stampaFrazionaria(quoziente(f1, f2), sr);
  printf("%s + %s = %s\n", s1, s2, sr);
}