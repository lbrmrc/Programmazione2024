#include <stdio.h>

int main() {
  int tentativi;
  int pin;
  tentativi = 0;
  do {
    // corpo del ciclo
    printf("Inserisci il PIN\n");
    scanf("%d", &pin);
    tentativi++;
  } while (tentativi < 3 && pin != 44122); // condizione
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}