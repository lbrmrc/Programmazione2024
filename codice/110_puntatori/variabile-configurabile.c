#include <stdio.h>

int main(void) {
  int a, b;
  char ch;
  int* p;
  printf("a o b?\n"); scanf("%c", &ch);
  if (ch == 'a')
    p = &a;
  else
    p = &b;
  a = 1; b = 2;
  // *p (stessa espressione) coincide con a oppure con b;
  // si decide *pa)a tempo di esecuzione
  *p = 3;
  printf("%d %d\n", a, b);  
  return 0;
}