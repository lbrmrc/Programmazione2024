#include <stdio.h>
#include <string.h>

void telefono(char s[]) {
  strcpy(s,"333-1234567");
}

int main(void) {
  char numero_telefono[100];
  telefono(numero_telefono);
  printf("%s\n", numero_telefono);
  return 0;
}