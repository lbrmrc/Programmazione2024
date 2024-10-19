#include <stdio.h>

main() {
    int x, y;

    printf("Inserire le coordinate x y del punto: ");
    scanf("%d %d", &x, &y);

	if(x < 0 && y > 0){
		printf("Primo quadrante\n");
	}
	else if(x > 0 && y > 0){
		printf("Secondo quadrante\n");
	}
	else if(x < 0 && y < 0){
		printf("Terzo quadrante\n");
	}
	else if(x > 0 && y < 0){
		printf("Quarto quadrante\n");
	}
	else if((x > 0 || x < 0) && y == 0){ // (x > 0 || x < 0) quivale a (x != 0)
		printf("Punto sull'asse x\n");
	}
    else if(x==0 && (y>0 || y<0)){ // (y>0 || y<0) equivale a (y != 0)
		printf("Punto sull'asse y\n");
	}
	else if(x == 0 && y == 0){
        // In questo caso, l'if può essere omesso perché è l'unico caso rimasto 
		printf("Origine\n");
	}
}
