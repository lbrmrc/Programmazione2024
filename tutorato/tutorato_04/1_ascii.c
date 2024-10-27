#include<stdio.h>

main(){
    char c;

    do{ 
        printf("Inserisci un carattere singolo (0 per terminare): ");
        scanf(" %c", &c); 
        if (c >= 48 && c <= 57)
            printf("%c (%d) è un numero.\n", c, c);
        else if (c >= 65 && c <= 90)
            printf("%c (%d) è una lettera maiuscola.\n", c, c);
        else if (c >= 97 && c <= 122)
            printf("%c (%d) è una lettera minuscola.\n", c, c);
        else
            printf("%c (%d) è un simbolo.\n", c, c);
        // NB: lo spazio prima di %c serve perché altrimenti vengono letti gli spazi bianchi iniziali (spazi, a capo, tabulazioni) rimasti nello stream di input
        // Mettendo lo spazio prima di %c (" %c"), si indica di prendere il primo carattere disponibile che non sia uno spazio bianco.
    }while(c != '0');
}