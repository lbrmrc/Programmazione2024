#include "campo.h"

int main() {
  Campo c;
  Mossa m;
  inizializza(&c);
  stampa(&c);
  // stato iniziale

  while (1) {
    leggiMossa(&m); // azione
    aggiorna(&c, m); // aggiornamento stato
    stampa(&c); // presentazione
  }
  return 0;
}