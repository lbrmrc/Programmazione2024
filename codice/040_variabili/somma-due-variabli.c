#include <stdio.h>

int main() {
  int addendo;
  int somma = 0; // accumulatore

  scanf("%d", &addendo);
  somma = somma + addendo;
  scanf("%d", &addendo);
  somma = somma + addendo;
  scanf("%d", &addendo);
  somma = somma + addendo;
  
  printf("%d\n", somma);
}