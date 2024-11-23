#include <stdio.h>
#include <string.h>
#define DIM 100

int rimuoviDuplicati(char *s1, char *s2, int *n1, int n2);

int main(){
    int n1,n2;
	int rimossi;
	char s1[DIM], s2[DIM];
	
	printf("Inserisci stringa 1: ");
	scanf("%s", s1);
	n1 = strlen(s1);
	if(n1 >= DIM) {
		printf("La dimensione a stringa deve essere < %d. Attuale: %d\n", DIM, n1);
		return -1;
	}

	printf("Inserisci stringa 2: ");
	scanf("%s", s2);
	n2 = strlen(s2);
	if(n2 >= DIM) {
		printf("La dimensione della stringa deve essere < %d. Attuale: %d\n", DIM, n2);
		return -1;
	}

	rimossi = rimuoviDuplicati(s1,s2,&n1,n2);
	
	printf("\n\nEliminati %d elementi.\n", rimossi);
	
	printf("Risultato: %s\n", s1);

	return 0;
}

int rimuoviDuplicati(char *s1, char *s2, int *n1, int n2) {
	int i,j,k;
	int contatoreRimossi = 0;
	
	for(i=0; i<n2; i++){ // per ogni carattere della stringa 2...
		printf("\n\nControllo presenza di: %c", s2[i]);
		j=0; // reset di j
		while(j<(*n1)){ // controllo la corrispondenza con ogni carattere della stringa 1...
			printf("\n\tj=%d, s1=%s, controllo %c",j,s1,s1[j]);
			if(s1[j] == s2[i]){ 
				printf(": rimuovo => s1=");
				// e se c'è corrispondenza, devo eliminare quel carattere e spostare i successivi indietro di una posizione
				for(k=j; k<(*n1); k++){
					s1[k] = s1[k+1];
				}
				printf("%s", s1);
				(*n1)--; // devo anche diminuire la dimensione della stringa 1
				contatoreRimossi++;
			} else {
				j++;
			}
		}
	}

	return contatoreRimossi;
}