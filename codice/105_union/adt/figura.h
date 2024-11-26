// definizioni dei tipi di dato

typedef enum { Quadrato, Rettangolo, Cerchio } TipoFigura;

typedef union {
  struct {
    float lato;
  } datiQuadrato;
  struct {
    float base;
    float altezza;
  } datiRettangolo;
  struct {
    float raggio;
  } datiCerchio;
} DatiFigura;

typedef struct {   // discriminated union
  TipoFigura tipo; // discriminante
  DatiFigura dati;
} Figura;

// dichiarazioni delle funzioni
void assegnaQuadrato(Figura *pf, float l);
void assegnaRettangolo(Figura *pf, float b, float h);
void assegnaCerchio(Figura *pf, float r);
float area(Figura *pf);
float perimetro(Figura *pf);