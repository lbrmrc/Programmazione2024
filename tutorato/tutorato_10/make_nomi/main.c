#include <stdio.h>
#include <stdlib.h>
#include "registro.h"

int main() {
    Registro r;

    // Inizializza il registro
    inizializza(&r);

    carica_dati(&r, "nomi.txt");
    
    // Ordina i dati e scrivili nel file di output
    ordina(&r);
    scrivi_ordinati(&r);
    //parte 2
    scrivi_ordinati_bin(&r);

    return 0;
}
