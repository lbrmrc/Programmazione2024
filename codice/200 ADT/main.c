#include <stdio.h>

#include "counter.h"

int main(){
    Counter c; // variabile istanza dell'ADT Counter
    reset(&c); // impostazione a 0
    inc(&c); // incremento
    inc(&c);
    printf("%d\n", val(c)); // stampa del valore
}