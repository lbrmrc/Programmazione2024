#include <stdio.h>

int main() {
  char carattere;
  // lettura carattere
  scanf("%c", &carattere);

  if (carattere >= 'A' && carattere <= 'Z')
    printf("Maiuscola\n");
  if (carattere >= 'a' && carattere <= 'z')
    printf("Minuscola\n");
  if (carattere >= '0' && carattere <= '9')
    printf("Cifra\n");
}