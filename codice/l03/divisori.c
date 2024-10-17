#include <stdio.h>

int main() {
  int n;
  int candidato;
  printf("Inserisci un numero positivo\n");
  scanf("%d", &n);
  for (candidato = 1; candidato <= n; candidato++) {
    // candidato assume valori dalla sequenza [1..n]
    if (n % candidato == 0) {
      // candidato assume i valori della sequenza filter(n % _==0, [1..n]), cioè
      // dei divisori di n
      printf("%d\n", candidato);
    }
  }
}