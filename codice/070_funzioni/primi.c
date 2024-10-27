#include <stdio.h>

int primo(int n) {
  int i, conta_divisori;
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
    return 1;
  else
    return 0;
}

int main() {
  int massimo;
  int i;
  printf("Inserisci un numero intero\n");
  scanf("%d", &massimo);
  for (i =2 ; i<=massimo; i++)  
    // i assume la sequenza dei valori  fra 2 e massimo = 2...massimo
    if (primo(i))
      // i assume la sequenza dei valori primi fra 2 e massimo = filter(primo, 2...massimo)
      printf("%d\n", i); 
}