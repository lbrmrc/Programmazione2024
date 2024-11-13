#include <stdio.h>
#include <string.h>
#define DIM 20

int main() {
  char s1[20], s2[20];
  int risultato;
  scanf("%s%s", s1, s2);

  risultato = strcmp(s1, s2);

  if (risultato < 0)
    printf("%s precede %s\n", s1, s2);
  if (risultato == 0)
    printf("%s e %s sono uguali\n", s1, s2);
  if (risultato > 0)
    printf("%s precede %s\n", s2, s1);
}