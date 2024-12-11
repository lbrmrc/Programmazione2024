#define DIM 1000

typedef struct {
  char nome[31];
  float calorie;
} Cibo;

typedef struct nodo {
  Cibo dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl); // dichiarazione

void insOrdinato(Lista *pl, Cibo r);

float calorie100(Lista l, char nome[]);