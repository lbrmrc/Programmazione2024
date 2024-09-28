#include <stdio.h>

int main() {
  int pin;
  do
    scanf("%d", &pin);
  while (pin != 44122);
  printf("Accesso consentito\n");
}
