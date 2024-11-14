// stampa tutti i numeri non negativi dati in input e si ferma quando viene
// inserito un numero negativo
#include <stdio.h>

int main() {
  int numero;
  do {
    scanf("%d", &numero);
    if (numero >= 0)
      printf("%d\n", numero);
  } while (numero >= 0);
  return 0;
}