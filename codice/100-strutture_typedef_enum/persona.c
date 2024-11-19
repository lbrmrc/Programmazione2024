#include <stdio.h>
#include <string.h>

int main() {
  struct {
    char nome[20];
    char cognome[30];
    int eta;
  } p1, p2, p[20];

  strcpy(p1.nome, "Mario");
  scanf("%s", p1.cognome);
  scanf("%d", &p1.eta);
  printf("%s %s %d\n", p1.nome, p1.cognome, p1.eta);
  scanf("%s%s%s", p2.nome, p2.cognome, &p2.eta);
  printf("%s %s %d", p2.nome, p2.cognome, p2.eta);
  p[18].eta = 50;
  return 0;
}