#include "campo.h"

int main() {
  Campo c;
  Mossa m;
  inizializza(&c);
  stampa(&c);
  // stato iniziale
  
  leggiMossa(&m);
  aggiorna(&c, m);
  stampa(&c);

  return 0;
}