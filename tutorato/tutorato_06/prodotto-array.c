#include <stdio.h>
#define DIM 5

void swap (float arr [], int dim) // alternativa : float * arr
{
    float temp;
    temp = arr[0];

    arr[0] = arr[dim-1];
    arr[dim-1] = temp;
}

int main()
{
    // parte 1
    float arr[DIM];
    float valore;
    for (int i = 0; i < DIM; i++)
    {
        // scanf("%f", &valore);
        // arr[i] = valore;
        scanf("%f", &arr[i]);
    }

    // parte 2
    float prodotto = 1;
    for (int i = 0; i < DIM; i++)
    {
        prodotto *= arr[i];
    }
    printf("Il prodotto degli elementi dell'array è %.2f \n", prodotto);

    // parte 3
    swap(arr, DIM);

    //parte 4 
    printf("Array dopo lo scambio : \n");
    prodotto = 1;
    for (int i = 0; i < DIM; i++)
    {
        printf("%.2f\t", arr[i]);
        prodotto *= arr[i];
    }
    printf("\nIl prodotto degli elementi dell'array è %.2f", prodotto);
    
    
    return 0;
}