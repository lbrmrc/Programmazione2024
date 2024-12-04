#define DIM 1000

typedef struct {
  char nome[31];
  float calorie;
} Cibo;

typedef struct {
  int n_elementi;
  Cibo dati[DIM];
} Lista;

void nuovaLista(Lista *pl); // dichiarazione

void insCoda(Lista *pl, Cibo r);

float calorie100(Lista l, char nome[]);