#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaPazienti.h"

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista* pl, Rilevazione v) {
  // se non esiste un elemento per il paziente lo crea;
  // poi incrementa il contatore delle rilevazioni
  // e le somme di temperatura e saturazione
  // e infine (parte 2) aggiorna il flag dei valori anomali
  int trovato = 0;
  while (*pl != NULL && strcmp((*pl)->dato.cf, v.cf) != 0) //scorro tutta la lista fino a quando non trovo un elemento con lo stesso cf oppure finisco la lista
    pl = &(*pl)->next;
  //nota questo if é esterno al while
  if (*pl == NULL) { // Lista vuota o cf non trovato: inserisco direttamente i dati di v
    Dato d;
    strcpy(d.cf, v.cf);
    d.n_rilevazioni = 1; // Prima rilevazione
    d.somma_temperatura = v.temperatura;
    d.somma_saturazione = v.saturazione;
    d.anomalia = (v.temperatura > 37.5 || v.saturazione < 96.0) ? 1 : 0;

    insTesta(pl, d); // Inserisco direttamente il dato completo
  } else {
      // Se esisteva già una rilevazione con lo stesso cf, salvo i dati aggregandoli
      (*pl)->dato.n_rilevazioni++;
      (*pl)->dato.somma_temperatura += v.temperatura;
      (*pl)->dato.somma_saturazione += v.saturazione;
      if (v.temperatura > 37.5 || v.saturazione < 96.0)
          (*pl)->dato.anomalia = 1;
  }

}

// void aggiorna(Lista* pl, Rilevazione v) { // VERSIONE ALTERNATIVA
//   // se non esiste un elemento per il paziente lo crea;
//   // poi incrementa il contatore delle rilevazioni
//   // e le somme di temperatura e saturazione
//   // e infine (parte 2) aggiorna il flag dei valori anomali
//   int trovato = 0;
//   while (*pl != NULL && strcmp((*pl)->dato.cf, v.cf) != 0) //scorro tutta la lista fino a quando non trovo un elemento con lo stesso cf oppure finisco la lista
//     pl = &(*pl)->next;
  
//   // questo if è fuori dal while
//   if (*pl == NULL) { //se non ho trovato un elemento con stesso cf oppure la lista è vuota, creo un nuovo elemento ed inserisco in lista
//     Dato d;
//     strcpy(d.cf, v.cf);
//     d.n_rilevazioni = 0;
//     d.somma_temperatura = 0.0;
//     d.somma_saturazione = 0.0;
//     d.anomalia = 0;
//     insTesta(pl, d);
//   }
//   //aggiorno poi i valori
//   (*pl)->dato.n_rilevazioni++;
//   (*pl)->dato.somma_temperatura += v.temperatura;
//   (*pl)->dato.somma_saturazione += v.saturazione;
//   //parte 2
//   if (v.temperatura > 37.5 || v.saturazione < 96.0)
//     (*pl)->dato.anomalia = 1;
// }

void elimTesta(Lista* pl) {
  Nodo* aux = *pl;
  *pl = (*pl)->next;
  free(aux);
}

int annoNascita(char* cf) {
  // supponiamo che i pazienti siano tutti nati nel Novecento
  return 1900 + 10 * (cf[6] - '0') + (cf[7] - '0');
}

void eliminaSani(Lista* pl) {
  while (*pl)
    if (annoNascita((*pl)->dato.cf) >= 1950 && !(*pl)->dato.anomalia)
      elimTesta(pl);
    else
      pl = &(*pl)->next;
}

void stampa(Lista l) {
  while (l != NULL) {
    printf("%s %.1f %.1f\n", 
        l->dato.cf,
        l->dato.somma_temperatura / l->dato.n_rilevazioni,
        l->dato.somma_saturazione / l->dato.n_rilevazioni
    );
    l = l->next;
  }
}