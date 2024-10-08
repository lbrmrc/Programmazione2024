#include <stdio.h>

int main() {
  int numero;

richiesta:
  // richiesta numero
  printf("Inserisci un numero intero\n");
  scanf("%d", &numero);
  // stampa del doppio di numero
  printf("%d\n", numero * 2);

  // ... fino a che l'utente non inserisce un numero negativo
  if (numero >= 0)
    goto richiesta;
}