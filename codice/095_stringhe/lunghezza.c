#include <stdio.h>
#define DIM 10

int main() {
  char s[DIM];
  int i;
  int l; // dimensione logica della stringa
  scanf("%s", s);
  l = 0;
  while (s[l] != '\0') // '\0' equivale a 0 o a NULL
    l++;
  printf("%d\n", l);
  return 0;
}