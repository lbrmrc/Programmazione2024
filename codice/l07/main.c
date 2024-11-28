#include <stdio.h>

#include "campo.h"

int main() {
  Campo c;
  Mossa m;
  inizializza(&c);
  stampa(&c);
  // stato iniziale

  while (valutazione(&c) == Aperto) {
    leggiMossa(&m);  // azione
    aggiorna(&c, m); // aggiornamento stato
    stampa(&c);      // presentazione
  }

  if (valutazione(&c) == Vincente)
    printf("Hai vinto\n");
  else
    printf("Hai perso\n");
  return 0;
}