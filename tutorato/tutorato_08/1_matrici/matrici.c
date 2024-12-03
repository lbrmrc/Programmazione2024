#include <stdio.h>
#include "matrici.h"

// Funzione per sommare due matrici
void sommaMatrici(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int risultato[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            risultato[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Funzione per stampare una matrice
void stampaSomma(int matrice[ROWS][COLS]) {
    printf("Matrice risultante:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}
