#include <stdio.h>

int main() {
  char a[] = "gian";
  char b[] = "luca";
  char c[20];
  int i;
  int j;
  i = 0;
  // copio a in c
  while (a[i] != '\0') {
    c[i] = a[i];
    i++;
  }
  // copio b in c
  j = 0;
  while (b[j] != '\0') {
    c[i] = b[j];
    i++;
    j++;
  }
  c[i] = '\0';

  // c è la concatenazione di a e b
  printf("%s\n", c);
  return 0;
}