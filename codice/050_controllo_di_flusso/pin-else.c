#include <stdio.h>

int main() {
  int pin;
  scanf("%d", &pin);
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}
