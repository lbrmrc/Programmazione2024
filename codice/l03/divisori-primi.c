#include <stdio.h>

int main() {
  int n;
  int candidato;
  int divisori_candidato;
  int i;
  printf("Inserisci un numero positivo\n");
  scanf("%d", &n);
  for (candidato = 2; candidato <= n; candidato++) {
    // candidato assume valori dalla sequenza [1..n]
    if (n % candidato == 0) {
      // candidato assume i valori della sequenza filter(n % _==0, [1..n]), cioè
      // dei divisori di n
      divisori_candidato = 0;
      for (i = 2; divisori_candidato == 0 && i * i <= candidato; i++) {
        if (candidato % i == 0)
          divisori_candidato++;
      }
      if (divisori_candidato == 0) {
        // candidato è un divisore primo di n
        printf("%d\n", candidato);
      }
    }
  }
}