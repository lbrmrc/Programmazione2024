#include <stdio.h>

int main() {
  // definisco le variabili per giorno, mese e anno
  int G, M, A;

  // definisco le variabili per i risultati intermedi
  int N0, N1, N2, N3;

  // definisco la variabile per il risultato finale
  int JD1, JD2;

  printf("Inserisci giorno, mese e anno della prima data\n");
  // input di giorno, mese e anno
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  // calcolo N0, N1, N2 ed N3
  N0 = (M - 14) / 12;
  N1 = (1461 * (A + 4800 + N0)) / 4;
  N2 = (367 * (M - 2 - 12 * N0)) / 12;
  N3 = (3 * (A + 4900 + N0)) / 400;

  // calcolo JD

  JD1 = N1 + N2 - N3 + G - 32075;

  printf("Inserisci giorno, mese e anno della seconda data\n");
  // input di giorno, mese e anno
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  N0 = (M - 14) / 12;
  N1 = (1461 * (A + 4800 + N0)) / 4;
  N2 = (367 * (M - 2 - 12 * N0)) / 12;
  N3 = (3 * (A + 4900 + N0)) / 400;

  JD2 = N1 + N2 - N3 + G - 32075;

  printf("La differenza fra le date e` %d\n", JD2 - JD1);
}