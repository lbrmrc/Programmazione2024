#include <stdio.h>

float va(float z) {
  if (z < 0)
    return -z;
  else
    return z;
}

float radice(float S) {
  float x, a, b;
  x = 1.0;

  while (va(x * x - S) / S > 1e-5) {
    a = (S - x * x) / (2 * x);
    b = x + a;
    x = b - a * a / (2 * b);
  }
  return x;
}

int main() {
  int M, N;
  int minore, maggiore;
  int i;
  float s; // accumulatore
  printf("Inserisci due numeri interi\n");
  scanf("%d%d", &M, &N);
  if (M <= N) {
    minore = M;
    maggiore = N;
  } else {
    minore = N;
    maggiore = M;
  }
  s = 0.0; // inizializzazione accumulatore
  for (i = minore; i <= maggiore; i++)
    // Si
    // map (radice, Si)
    s = s + radice((float)i);
  // in s c'è la somma delle radici quadrate degli interi compresi fra M e N
  printf("%f\n", s);
  return 0;
}