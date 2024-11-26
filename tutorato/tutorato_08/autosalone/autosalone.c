#include <stdio.h>
#include <string.h>

#include "autosalone.h"

void inizializza(Autosalone *pa)
{
  pa->dl = 0;
}

void stampa_proprietari_maggiore_cilindrata(Autosalone *pa, int cilindrata) {
  int i = 0;
  printf("\n\nProprietari con auto di cilindrata maggiore di %dcc:\n",
         cilindrata);
  for (i = 0; i < pa->dl; i++) {
    if (pa->automobili[i].cilindrata > cilindrata) {
      printf("\n- %s", pa->automobili[i].cognome);
    }
  }
}

void stampa_elemento(Automobile elemento) {
  printf("Marca: %s\n", elemento.marca);
  printf("Cilindrata: %d\n", elemento.cilindrata);
  printf("Anno: %d\n", elemento.anno);
  printf("Cognome: %s\n", elemento.cognome);
  printf("Nome: %s\n", elemento.nome);
}

int inserisci(Autosalone *pa) {
  printf("Inserire la marca: ");
  scanf("%s", pa->automobili[pa->dl].marca);

  printf("Inserire la cilindrata: ");
  scanf("%d", &(pa->automobili[pa->dl].cilindrata));

  if (pa->automobili[pa->dl].cilindrata < 800 ||
      pa->automobili[pa->dl].cilindrata > 2500)
    return 1;

  printf("Inserire l'anno di immatricolazione: ");
  scanf("%d", &(pa->automobili[pa->dl].anno));

  if (pa->automobili[pa->dl].anno < 2000 || pa->automobili[pa->dl].anno > 2023)
    return 1;

  printf("Inserire il cognome dell'acquirente: ");
  scanf("%s", pa->automobili[pa->dl].cognome);

  printf("Inserire il nome dell'acquirente: ");
  scanf("%s", pa->automobili[pa->dl].nome);

  pa->dl++;

  return 0;
}

int ricerca(Autosalone *pa, char *marca) {
  int i, trovato = 1;

  for (i = 0; i < pa->dl; i++) {
    if (!strcmp(pa->automobili[i].marca,
                marca)) { // equivale a strcmp(t_a[i].marca, marca) == 0
      stampa_elemento(pa->automobili[i]);
      trovato = 0;
    }
  }
  return trovato;
}

int conta_auto(Autosalone *pa, int anno) {
  int i, count = 0;
  for (i = 0; i < pa->dl; i++)
    if (pa->automobili[i].anno == anno)
      count++;
  return count;
}