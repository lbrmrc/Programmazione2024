#include <stdio.h>

int main() {
  char s1[10], s2[10];
  int i;

  scanf("%s", s1);
  // copio s1 in s2 un carattere alla volta
  for (i = 0; i < 10; i++) // s2 = map (identità, s1)
  {
    s2[i] = s1[i];
    if (s1[i] == 0)
      break;
  }

  printf("%s\n", s2);
  return 0;
}