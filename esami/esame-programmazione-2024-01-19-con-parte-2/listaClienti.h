typedef struct {
    char cf[17];
    int giorno, mese, anno;
    float importo;
} Record; // "elemento logico" del file

typedef struct{
    char cf[17];
    float totale;
    float importi_mensili[12];
} Dato; // elemento della lista

typedef struct nodo {
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);