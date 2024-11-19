#include <stdio.h>
#define DIM 120

typedef struct {
  int numero;
  int frequenza;
} FrequenzaNumero;

int leggi_array(int a[], int maxdim) {
  int dl;
  dl = 0;
  do {
    scanf("%d", &a[dl]);
    if (a[dl] < 0)
      break;
    dl++;
  } while (dl < DIM);
  return dl;
}

int indice_massimo(int a[], int dl) {
  int m, i;
  m = 0; // accumulatore: indice del massimo
  for (i = 1; i < dl; i++)
    if (a[i] > a[m])
      m = i;
  return m;
}

int indice_minimo(int a[], int dl) {
  int m, i;
  m = 0; // accumulatore: indice del massimo
  for (i = 1; i < dl; i++)
    if (a[i] < a[m])
      m = i;
  return m;
}

float media(int a[], int dl) {
  int somma = 0;
  int i;
  for (i = 0; i < dl; i++)
    somma += a[i];
  return (float)somma / dl;
}

int valori_frequenze(int a[], int dla, FrequenzaNumero vf[]) {
  int dl = 0;
  int i_a;
  int i_v;
  for (i_a = 0; i_a < dla; i_a++) {
    for (i_v = 0; i_v < dl; i_v++)
      if (a[i_a] == vf[i_v].numero) {
        vf[i_v].frequenza++;
        break;
      }
    if (i_v == dl) {
      vf[dl].numero = a[i_a];
      vf[dl].frequenza = 1;
      dl++;
    }
  }
  return dl;
}

int main() {
  int numeri[DIM], dln;
  dln = leggi_array(numeri, DIM);
  FrequenzaNumero frequenze_numeri[DIM];
  int dlf;
  int indice_massima_frequenza;
  int i_f;
  printf("Massimo: %d\n", numeri[indice_massimo(numeri, dln)]);
  printf("Minimo: %d\n", numeri[indice_minimo(numeri, dln)]);
  printf("Media: %f\n", media(numeri, dln));
  dlf = valori_frequenze(numeri, dln, frequenze_numeri);
  indice_massima_frequenza = 0;
  for (i_f = 1; i_f < dlf; i_f++)
    if (frequenze_numeri[i_f].frequenza >
        frequenze_numeri[indice_massima_frequenza].frequenza)
      indice_massima_frequenza = i_f;
  for (i_f = 0; i_f < dlf; i_f++) {
    if (frequenze_numeri[i_f].frequenza ==
        frequenze_numeri[indice_massima_frequenza].frequenza)
      printf("%d ", frequenze_numeri[i_f].numero);
  }
  printf("\n");
}