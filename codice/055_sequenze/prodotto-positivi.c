#include <stdio.h>

int main() {
  int i;
  int n;
  int p; // accumulatore

  // reduce(*, 1, Sinput)
  p = 1; // inizializzazione al valore corrispondente alla sequenza vuota

  for (i = 0; i < 5; i++) {
    printf("Inserisci un numero naturale\n");
    scanf("%d", &n);
    // n assume i valori della sequenza dei 5 input
    if (n > 0) {
      // n assume i valori di filter(>0, Sinput), cioè quelli di input positivi
      p = p * n; // aggiorno l'accumulatore con l'operazione binaria applicata a
                 // esso e all'elemento della sequenza
    }
  }
  printf("Prodotto = %d\n", p);
}