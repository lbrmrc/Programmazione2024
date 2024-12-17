#include "dato.h"

typedef struct nodo {
    Dato dato;
    struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void stampa(Lista l);
void inserimentoCoda(Lista* pl, Dato d);
Lista* ricerca(Lista* pl);
void insTesta(Lista *pl, Dato d);
int lunghezza(Lista l);
int somma(Lista l);
void elimTesta(Lista* pl);
void elimTutti(Lista* pl, int d);
Lista* ricercaDato(Lista* pl, int d);