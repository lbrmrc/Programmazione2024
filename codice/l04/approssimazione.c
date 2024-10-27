#include <stdio.h>

float potenza(float base, int esp) {
  float prod = 1.0;
  int i;
  for (i = 1; i <= esp; i++)
    prod = prod * base;
  return prod;
}

float fattoriale(int n) {
  float prod = 1.0;
  int i;
  for (i = 1; i <= n; i++)
    prod = prod * i;
  return prod;
}

float sen(float x, int k) {
  int n;
  float somma; // accumulatore
  somma = 0;
  for (n = 0; n < k; n++)
    somma =
        somma + potenza(-1, n) * potenza(x, 2 * n + 1) / fattoriale(2 * n + 1);
  return somma;
}

int main() {
  float x;
  printf("Inserisci un numero reale\n");
  scanf("%f", &x);
  printf("%f\n", sen(x, 6));
  return 0;
}