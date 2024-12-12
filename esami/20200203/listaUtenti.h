// tipo del record del file binario
typedef char CodiceFiscale[17];

// tipo dell'elemento della lista
typedef struct {
  CodiceFiscale cf;
  int att[3];
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void inserisciUtente(Lista *pl, CodiceFiscale cf);
void aggiorna(Lista *pl, CodiceFiscale cf, int attivita);
void stampa(Lista l);