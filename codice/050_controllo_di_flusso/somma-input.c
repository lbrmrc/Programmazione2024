#include <stdio.h>

int main() {
  int n;
  int i;
  // somma = reduce(+,0, Sn)
  int s; // accumulatore
  s = 0; // inizializzazione accumulatore
  printf("Inserisci 5 numeri interi\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &n);
    s = s + n;
  }
  // dentro s c'è la somma
  printf("Somma: %d\n", s);
}