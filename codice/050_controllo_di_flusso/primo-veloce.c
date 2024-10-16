#include <stdio.h>

int main() {
  int n, i, conta_divisori;
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  // Si = sequenza dei valori 1, 2, ..., n
  conta_divisori = 0;
  for (i = 2; conta_divisori == 0 && i * i <= n; i++) {
    // i assume i valori di Si

    if (n % i == 0) {
      // i assume i valori di Si che sono divisori di n, cioè di Sd =
      // filter(divide10, Si);
      conta_divisori++;
    }
  }
  // conta_divisori contiene il numero di divisori di n
  if (conta_divisori == 0)
    printf("Primo\n");
  else
    printf("Non primo\n");
}