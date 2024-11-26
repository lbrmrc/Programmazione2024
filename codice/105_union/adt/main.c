#include <stdio.h>

// interfaccia ADT Figura
#include "figura.h"

int main() {
  // accedo alle variabili di tipo Figura solo attraverso le funzioni su di esse
  Figura f;

  assegnaQuadrato(&f, 3.5);
  printf("%f %f\n", area(&f), perimetro(&f));
  assegnaRettangolo(&f, 2.5, 1.7);
  printf("%f %f\n", area(&f), perimetro(&f));
  assegnaCerchio(&f, 2.0);
  printf("%f %f\n", area(&f), perimetro(&f));
  return 0;
}