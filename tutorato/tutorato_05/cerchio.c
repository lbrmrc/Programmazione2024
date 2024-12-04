#include <stdio.h> 

#define PI 3.14

// Dichiarazione / signature / interfaccia delle funzioni
float diametroCerchio(int raggio);
float perimetroCerchio(int raggio);
float areaCerchio(int raggio);


int main() {
    int raggio;
    float diametro, area, circonferenza;

    printf("Inserisci il valore del raggio: ");
    scanf("%d", &raggio);

    diametro = diametroCerchio(raggio);
    printf("Il diametro del cerchio è %.2f\n", diametro);

    circonferenza = perimetroCerchio(raggio);
    printf("La circonferenza del cerchio è %.2f\n", circonferenza);

    area = areaCerchio(raggio);    
    printf("L'area del cerchio è %.2f\n", area);

    return 0;
}


// Definizione delle funzioni
float diametroCerchio(int raggio){
    float diametro = 2 * raggio;
    return diametro;
}

float perimetroCerchio(int raggio){
    float circonferenza = 2 * PI * raggio;
    return circonferenza;
}

float areaCerchio(int raggio){
    float area = raggio * raggio * PI;
    return area;
}