#include <stdio.h>

int main() {
  float a, b, c;
  float ascisse[21];
  float ordinate[21];
  int i;
  printf("Inserisci i tre coefficienti della parabola\n");
  scanf("%f%f%f", &a, &b, &c);

  for (i = 0; i < 21; i++) {
    // ForEach(inizializzazione, ascisse)
    ascisse[i] = -1.0 + 0.1 * i;
  }


  for (i = 0; i < 21; i++) {
    // ordinate = Map(x -> ax*x+b*x+c , ascisse)
    ordinate[i] = a * ascisse[i] * ascisse[i] + b * ascisse[i] + c;
  }

  for (i=0; i<21; i++){
    printf("%.4f\t%.4f\n", ascisse[i], ordinate[i]);
  }

  return 0;
}