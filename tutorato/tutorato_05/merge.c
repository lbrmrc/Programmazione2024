#include <stdio.h>
#define DIM 10
#define DIM_DOPPIO 20

void inserisci_valori_ordinati(int *arr, int *dl, int max_dim, char nome_array) {
    int i, prev;

    // Inserimento della dimensione logica
    do {
        printf("\nInserisci la dimensione logica di %c:\n", nome_array);
        scanf("%d", dl);
    } while (*dl > max_dim || *dl <= 0);

    // Inserimento dei valori ordinati
    printf("Inserisci i valori di %c ordinati:\n", nome_array);
    prev = 0;
    for (i = 0; i < *dl; i++) {
        scanf("%d", &arr[i]);
        while (arr[i] < prev) { // controllo ordinamento
            printf("Errore: inserisci un valore >= precedente (%d): ", prev);
            scanf("%d", &arr[i]);
        }
        prev = arr[i];
    }
}

int main() {
    int i, ia, ib, ic;      // indici
    int dla, dlb, dlc;      // dimensione logica
    int a[DIM], b[DIM];     // array di cui fare il merge
    int c[DIM_DOPPIO];      // array risultato del merge

    // Inserimento di valori nell'array a
    inserisci_valori_ordinati(a, &dla, DIM, 'a');

    // Inserimento di valori nell'array b
    inserisci_valori_ordinati(b, &dlb, DIM, 'b');

    // Merge degli array a e b nell'array c
    dlc = dla + dlb; // dimensione logica array di output
    ia = 0;
    ib = 0;
    for (ic = 0; ic < dlc && (ia < dla || ib < dlb); ic++) {
        if (ia < dla && ib < dlb) { //ci sono ancora elementi in entrambi gli array a e b che devono essere confrontati.
            if (a[ia] <= b[ib]) {
                c[ic] = a[ia];
                ia++;
            } else {
                c[ic] = b[ib];
                ib++;
            }
        } 
        else if (ia >= dla && ib < dlb) { // tutti gli elementi di a sono già stati copiati in c, ma ci sono ancora elementi in b
            c[ic] = b[ib];
            ib++;
        } 
        else if (ia < dla && ib >= dlb) { // tutti gli elementi di b sono stati copiati, ma ci sono ancora elementi in a.
            c[ic] = a[ia];
            ia++;
        }
    }

    // Stampa del risultato del merge
    printf("\nRisultato del merge:\nc = [ ");
    for (i = 0; i < dlc; i++) {
        printf("%d ", c[i]);
    }
    printf("]\n");

    return 0;
}
