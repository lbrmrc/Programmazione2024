#include <stdio.h>

int main() {
  int m, n;
  int c; // accumulatore
  printf("Inserisci dividendo e divisore\n");
  scanf("%d%d", &m, &n);
  c = 0; // inizializzazione accumulatore
  while (m >= n) {
    m = m - n;
    c = c + 1; // aggiornamento accumulatore
  }
  printf("Quoziente: %d\n", c);
  printf("Resto: %d\n", m);
}