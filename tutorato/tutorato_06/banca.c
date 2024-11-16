#include <stdio.h>

void ripristina_saldo(float *saldo, float *valore_default) {
    // Intervallo valido per i saldi
    float saldo_minimo = 0.0f;
    float saldo_massimo = 1000000.0f;

    // Verifica se il saldo è fuori dal range
    if (*saldo < saldo_minimo || *saldo > saldo_massimo) {
        printf("Attacco hacker rilevato! Ripristino saldo...\n");
        *saldo = *valore_default;  // Ripristina il saldo al valore di default
    } else {
        printf("Saldo valido. Nessuna modifica necessaria.\n");
    }
}

int main() {
    // Inizializza un saldo e un valore di default
    float saldo;
    float valore_default = 5000.0f;  // Il valore di default da ripristinare in caso di attacco

    printf("Inserire il saldo per effetture i controlli !\n");
    scanf("%f", &saldo);
    ripristina_saldo(&saldo, &valore_default);

    // Stampa il saldo finale
    printf("Il saldo del conto è: %.2f\n", saldo);

    return 0;
}
