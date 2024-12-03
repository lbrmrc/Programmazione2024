#include <stdio.h>
#include "matrici.h"

int main() {
    // Definizione delle matrici
    int mat1[ROWS][COLS] = {
        {2, 3, 6},
        {5, 1, 2},
        {5, 5, 5}
    };

    int mat2[ROWS][COLS] = {
        {9, 9, 9},
        {2, 3, 4},
        {8, 7, 3}
    };

    int risultato[ROWS][COLS];

    // Calcolo della somma delle matrici
    sommaMatrici(mat1, mat2, risultato);

    // Stampa della matrice risultante
    stampaSomma(risultato);

    return 0;
}
