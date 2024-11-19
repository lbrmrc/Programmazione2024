#include <stdio.h>

// definizione della firma delle funzioni

int conversione_binario(int num_intero);

int eleva(int base, int esp);

// main
int main()
{
    const int DIM = 8;  // Massimo 8 bit per numeri tra 0 e 255
    int num_intero;
    int v1[DIM];

    do {
        printf("Inserisci un intero compreso tra 0 e 255 : \n");
        scanf("%d", &num_intero);
    }while(num_intero < 0 || num_intero > 255);

    int i = 0; // tiene traccia di quante cifre è composto il numero binario
    int temp_num = num_intero;
    
    // Salva i resti (bit) nell'array tramite il metodo delle divisioni successive
    // 8/2 = 4, r =0 ; 4/2 = 2, r = 0 ... 1/2 = 0, r = 1
    do {
        v1[i] = conversione_binario(temp_num);
        temp_num /= 2; 
        i++;
    } while (temp_num != 0);

    printf("Rappresentazione binaria di %d: ", num_intero);
    
    // Stampa l'array al contrario
    int v2[i]; // salvo il numero binario
    int c = 0;
    for (int j = i - 1; j >= 0; j--) {
        v2[c] = v1[j];
        printf("%d", v2[c]);
        c++;
    }
    printf("\n");

    // verifica della correttezza con il metodo delle moltiplicazioni successive
    // 0 * 2^0 + 0 * 2^1 + ... + 1*2^3 = 8
    int verifica_intero = 0;
    for (int j = 0; j < i; j++ ){
        verifica_intero += v1[j] * eleva(2, j);
    }

    printf("Il valore inserito dall'utente era %d, quello ottenuto con le moltiplicazioni successive è %d \n",num_intero,verifica_intero);

    return 0;
}

// dichiarazione del corpo delle funzioni

int conversione_binario(int num_intero) {
    return num_intero % 2;
}

int eleva(int base, int esp){

    int risultato = 1; // valore neutro moltiplicazione

    for (int i = 0; i < esp; i++)
    {
        risultato *= base;
    }

    return risultato;
}
