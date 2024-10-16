#include <stdio.h>

int main() {
  int m, n, i, p;
  printf("Inserisci due numeri interi\n");
  scanf("%d%d", &m, &n);
  p = 0; // inizializzazione accumulatore
  // creo la sequenza Sm composta da n valori uguali a m
  for (i = 0; i < n; i++) {
    // considero un elemento di Sm
    p = p + m;
  }
  printf("Risultato: %d\n", p);
}