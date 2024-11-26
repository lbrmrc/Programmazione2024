#include "counter.h"

// definizioni delle operazioni su Counter
void reset(Counter *pc) {
  pc->dato = 0;
  pc->contatore_operazioni=0;
}

void inc(Counter *pc) {
  pc->dato++;
  pc->contatore_operazioni++;
}

int val(Counter c) { return c.dato; }