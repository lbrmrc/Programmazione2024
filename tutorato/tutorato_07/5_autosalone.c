#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
  char marca[20];  
  int cilindrata;  
  int anno;        
  char cognome[20];
  char nome[20];   
} automobili;

void stampa_elemento(automobili elemento);

int inserisci(automobili t_a[], int dl);
int ricerca(automobili t_a[], int dl, char *marca);
int conta_auto(automobili t_a[], int dl, int anno);

int main(){
 	int i,n,anno,numAuto;
 	char marca[20];
 	automobili autosalone[MAX]; // array di automobili che al più contiene 10 elementi (10 automobili)

	do{
		printf("Inserisci il numero di auto da registrare: ");
		scanf("%d", &numAuto);
	}while(numAuto>MAX);

	for(i=0; i<numAuto; i++){
		if(inserisci(autosalone, i)){
    		printf("Errore nell'inserimento dei dati.\n");
			return -1;
		}
	}

 	printf("\nInserisci marca da cercare: ");
 	scanf("%s", marca);

	if(ricerca(autosalone, numAuto, marca))
		printf("Auto non trovata\n");
 
 	printf("\n\nProprietari con auto di cilindrata maggiore di 1800cc:\n");
 	for (i=0; i<numAuto; i++){
		if(autosalone[i].cilindrata>1800){
	 		printf("\n- %s", autosalone[i].cognome);
		}
	}
	printf("\n\nInserisci l'anno di immatricolazione: ");
	scanf("%d", &anno);
	printf("Le auto immatricolate nell'anno %d sono: %d\n", anno, conta_auto(autosalone, numAuto,anno));

    return 0;
}

void stampa_elemento(automobili elemento){
	printf("Marca: %s\n", elemento.marca);
	printf("Cilindrata: %d\n", elemento.cilindrata);
	printf("Anno: %d\n", elemento.anno);
	printf("Cognome: %s\n", elemento.cognome);
	printf("Nome: %s\n", elemento.nome);
}

int inserisci(automobili t_a[], int dl){
	printf("Inserire la marca: ");
	scanf("%s", t_a[dl].marca);

	printf("Inserire la cilindrata: ");
	scanf("%d", &t_a[dl].cilindrata);

	if (t_a[dl].cilindrata<800 || t_a[dl].cilindrata>2500)
		return 1;

	printf("Inserire l'anno di immatricolazione: ");
	scanf("%d", &t_a[dl].anno);

	if (t_a[dl].anno<2000 || t_a[dl].anno>2023)
		return 1;

	printf("Inserire il cognome dell'acquirente: ");
	scanf("%s", t_a[dl].cognome);
	
	printf("Inserire il nome dell'acquirente: ");
	scanf("%s", t_a[dl].nome);

    return 0;
}

int ricerca(automobili t_a[], int dl, char *marca){
	int i, trovato=1;

	for(i=0;i<dl;i++){
		if(!strcmp(t_a[i].marca, marca)){ // equivale a strcmp(t_a[i].marca, marca) == 0
			stampa_elemento(t_a[i]);
			trovato=0;
		}
	}
	return trovato;
}

int conta_auto(automobili t_a[], int dl, int anno){
	int i, count=0;
	for (i=0; i<dl; i++)
		if(t_a[i].anno==anno)
			count++;
	return count;
}