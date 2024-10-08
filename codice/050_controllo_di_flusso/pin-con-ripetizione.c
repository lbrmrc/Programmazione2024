#include <stdio.h>

int main() {
  int pin;
richiesta:
  scanf("%d", &pin);
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    goto richiesta;
}