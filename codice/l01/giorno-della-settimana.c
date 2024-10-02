#include <stdio.h>

int main() {
  // definisco le variabili per giorno, mese e anno
  int G, M, A;

  // definisco le variabili per i risultati intermedi
  int N0, N1, N2, N3;

  // definisco la variabile per il risultato finale
  int JD;
  int resto;

  printf("Inserisci giorno, mese e anno di una data qualunque\n");
  // input di giorno, mese e anno
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  // calcolo N0, N1, N2 ed N3
  N0 = (M - 14) / 12;
  N1 = 1461 * ((A + 4800 + N0) / 4);
  N2 = (367 * (M - 2 - 12 * N0)) / 12;
  N3 = (3 * (A + 4900 + N0)) / 400;

  // calcolo JD

  JD = N1 + N2 - N3 + G - 32075;

  resto = JD % 7;

  // se il resto della divisione di JD per 7 è 0
  // stampa "lunedì"
  if (resto == 0)
    printf("Lunedì\n");
  // se il resto della divisione di JD per 7 è 1
  // stampa "martedì"
  if (resto == 1)
    printf("Martedì\n");
  // etc
  if (resto == 2)
    printf("Mercoledì\n");
  if (resto == 3)
    printf("Giovedì\n");
  if (resto == 4)
    printf("Venerdì\n");
  if (resto == 5)
    printf("Sabato\n");
  if (resto == 6)
    printf("Domenica\n");
}