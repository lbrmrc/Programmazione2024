#include <stdio.h>

#include "autosalone.h"

int main() {
  int i, n, anno, numAuto;
  char marca[20];
  Autosalone autosalone;       // Crea una struttura Autosalone
  //autosalone.dl = 0;

  inizializza(&autosalone);

  do {
    printf("Inserisci il numero di auto da registrare: ");
    scanf("%d", &numAuto);
  } while (numAuto > MAX);

  for (i = 0; i < numAuto; i++) {
    if (inserisci(&autosalone)) {
      printf("Errore nell'inserimento dei dati.\n");
      return -1;
    }
  }

  printf("\nInserisci marca da cercare: ");
  scanf("%s", marca);

  if (ricerca(&autosalone, marca))
    printf("Auto non trovata\n");

  printf("\n\nInserisci l'anno di immatricolazione: ");
  scanf("%d", &anno);
  printf("Le auto immatricolate nell'anno %d sono: %d\n", anno,
         conta_auto(&autosalone, anno));

  stampa_proprietari_maggiore_cilindrata(&autosalone, 1800);

  return 0;
}