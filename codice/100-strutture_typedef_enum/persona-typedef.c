#include <stdio.h>
#include <string.h>

typedef char Nome[20];
typedef char Cognome[30];

typedef struct {
  Nome nome;
  Cognome cognome;
  int eta;
} Persona;

void leggiPersona(Persona *p) {
  scanf("%s%s%d", (*p).nome, (*p).cognome, &(*p).eta);
}

Persona restituisciPersona() {
  Persona p;
  scanf("%s%s%d", p.nome, p.cognome, &p.eta);
  return p;
}

void stampaPersona(Persona a) {
  printf("%s %s %d\n", a.nome, a.cognome, a.eta);
  a.eta = 0;
}

// Persona è un tipo di dato astratto

int main() {
  Persona p1, p2, p[20];

  Persona p3 = {"Giovanni", "Neri", 40};

  Persona famiglia[2] = {{"Giovanni", "Bianchi", 30}, {"Maria", "Rossi", 28}};

  leggiPersona(&p1); // passaggio per "riferimento"
  stampaPersona(p1);
  p2 = restituisciPersona();
  stampaPersona(p2);
  leggiPersona(&famiglia[0]);
  stampaPersona(famiglia[1]);
  return 0;
}