typedef struct {
  char numero[11];
  char piano;
  float credito;
} Record;

typedef struct nodo {
  Record dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void insTesta(Lista *pl, Record r);
void aggiornaCredito(Lista, char numero[], int secondi);
void stampa(Lista l);