#define M_PI 3.141592654

// interfaccia
#include "figura.h"

// definizioni delle funzioni
void assegnaQuadrato(Figura *pf, float l) {
  pf->tipo = Quadrato;
  pf->dati.datiQuadrato.lato = l;
}

void assegnaRettangolo(Figura *pf, float b, float h) {
  pf->tipo = Rettangolo;
  pf->dati.datiRettangolo.base = b;
  pf->dati.datiRettangolo.altezza = h;
}

void assegnaCerchio(Figura *pf, float r) {
  pf->tipo = Cerchio;
  pf->dati.datiCerchio.raggio = r;
}

float area(Figura *pf) {
  switch (pf->tipo) {
  case Quadrato:
    return pf->dati.datiQuadrato.lato * pf->dati.datiQuadrato.lato;
  case Rettangolo:
    return pf->dati.datiRettangolo.base * pf->dati.datiRettangolo.altezza;
  case Cerchio:
    return M_PI * pf->dati.datiCerchio.raggio * pf->dati.datiCerchio.raggio;
  }
}

float perimetro(Figura *pf) {
  switch (pf->tipo) {
  case Quadrato:
    return 4 * pf->dati.datiQuadrato.lato;
  case Rettangolo:
    return 2 * (pf->dati.datiRettangolo.base + pf->dati.datiRettangolo.altezza);
  case Cerchio:
    return 2 * M_PI * pf->dati.datiCerchio.raggio;
  }
}
