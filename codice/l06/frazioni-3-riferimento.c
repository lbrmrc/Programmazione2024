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

int num(Frazione *pf) { return pf->num; } // (*pf).num

int den(Frazione *pf) { return pf->den; }

void frazione(Frazione *pf, int n, int d) {
  int m;
  if (d == 0) {
    printf("Errore: divisione per 0\n");
    exit(1);
  }
  m = n != 0 ? mcd(n, d) : 1;
  pf->num = n / m;
  pf->den = d / m;
}

void leggiFrazione(Frazione *pf) {
  int n, d;
  scanf("%d%d", &n, &d);
  frazione(pf, n, d);
}

void stampaFrazionaria(Frazione *pf) { printf("%d/%d", num(pf), den(pf)); }

void stampaDecimale(Frazione *pf) { printf("%f", (float)num(pf) / den(pf)); }

void somma(Frazione *pfr, Frazione *pf1, Frazione *pf2) {
  frazione(pfr, num(pf1) * den(pf2) + num(pf2) * den(pf1), den(pf1) * den(pf2));
}

void opposto(Frazione *pfr, Frazione *pf) { frazione(pfr, -num(pf), den(pf)); }

void differenza(Frazione *pfr, Frazione *pf1, Frazione *pf2) {
  Frazione fro2;
  opposto(&fro2, pf2);
  somma(pfr, pf1, &fro2);
}

void prodotto(Frazione *pfr, Frazione *pf1, Frazione *pf2) {
  frazione(pfr, num(pf1) * num(pf2), den(pf1) * den(pf2));
}

void inverso(Frazione *pfr, Frazione *pf) { frazione(pfr, den(pf), num(pf)); }

void quoziente(Frazione *pfr, Frazione *pf1, Frazione *pf2) {
  Frazione fri2;
  inverso(&fri2, pf2);
  prodotto(pfr, pf1, &fri2);
}

int main() {
  Frazione f1, f2, fr;
  frazione(&f1, 36, 60);
  frazione(&f2, 1, 3);
  somma(&fr, &f1, &f2);
  stampaFrazionaria(&fr);
  printf("\n");
  differenza(&fr, &f1, &f2);
  stampaFrazionaria(&fr);
  printf("\n");
  prodotto(&fr, &f1, &f2);
  stampaFrazionaria(&fr);
  printf("\n");
  quoziente(&fr, &f1, &f2);
  stampaFrazionaria(&fr);
  printf("\n");
}