// record persona

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso;
  int anno_nascita;
} Persona;

int main() {
  Persona persone[100];
  int dl;
  int i;
  FILE *pf;
  char sesso[2];
  pf = fopen("people.txt", "rt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }

  dl = 0;
  while (fscanf(pf, "%s%s%s%d", persone[dl].cognome, persone[dl].nome, sesso,
                &persone[dl].anno_nascita) == 4) {
    persone[dl].sesso = sesso[0];
    dl++;
  }

  for (i = 0; i < dl; i++) {
    printf("Cognome: %s\nNome: %s\nSesso: %c\nAnno di nascita: %d\n\n",
           persone[i].cognome, persone[i].nome, persone[i].sesso,
           persone[i].anno_nascita);
  }

  return 0;
}