#include <stdio.h>

typedef enum { Quadrato, Rettangolo } TipoFigura;

typedef union {
  struct {
    float lato;
  } datiQuadrato;
  struct {
    float base;
    float altezza;
  } datiRettangolo;
} DatiFigura;

typedef struct { // discriminated union
  TipoFigura tipo; // discriminante
  DatiFigura dati;
} Figura;

void assegnaQuadrato(Figura *pf, float l) {
  pf->tipo = Quadrato;
  pf->dati.datiQuadrato.lato = l;
}

void assegnaRettangolo(Figura *pf, float b, float h) {
  pf->tipo = Rettangolo;
  pf->dati.datiRettangolo.base = b;
  pf->dati.datiRettangolo.altezza = h;
}

float area(Figura *pf) {
  switch (pf->tipo) {
  case Quadrato:
    return pf->dati.datiQuadrato.lato * pf->dati.datiQuadrato.lato;
  case Rettangolo:
    return pf->dati.datiRettangolo.base * pf->dati.datiRettangolo.altezza;
  }
}

float perimetro(Figura *pf) {
  switch (pf->tipo) {
  case Quadrato:
    return 4 * pf->dati.datiQuadrato.lato;
  case Rettangolo:
    return 2 * (pf->dati.datiRettangolo.base + pf->dati.datiRettangolo.altezza);
  }
}

int main() {
  Figura f;
  assegnaQuadrato(&f, 3.5);
  printf("%f %f\n", area(&f), perimetro(&f));
  assegnaRettangolo(&f, 2.5, 1.7);
  printf("%f %f\n", area(&f), perimetro(&f));
}