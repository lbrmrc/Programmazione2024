#include <stdio.h>
#define DIM 20

int main() {
  char s1[20], s2[20];
  int risultato;
  int i;
  scanf("%s%s", s1, s2);

  i = 0;
  while ((risultato = s1[i] - s2[i]) == 0 && s1[i] != '\0' && s2[i] !='\0')
    i++;

  if (risultato < 0)
    printf("%s precede %s\n", s1, s2);
  if (risultato == 0)
    printf("%s e %s sono uguali\n", s1, s2);
  if (risultato > 0)
    printf("%s precede %s\n", s2, s1);
}