#include <stdio.h>

int giorno_giuliano(int g, int m, int a) {
  int N0, N1, N2, N3;
  N0 = (m - 14) / 12;
  N1 = 1461 * (a + 4800 + N0) / 4;
  N2 = 367 * (m - 2 - 12 * N0) / 12;
  N3 = 3 * (a + 4900 + N0) / 400;
  return N1 + N2 - N3 + g - 32075;
}

char giorno (int giorno, int mese, int anno){
  switch (giorno_giuliano(giorno, mese, anno) % 7){
    case 0: return 'l';
    case 1: return 'm';
    case 2: return 'M';
    case 3: return 'g';
    case 4: return 'v';
    case 5: return 's';
    case 6: return 'd';
  }
}

int main(){
  int G,M,A;
  printf("Inserisci una data (giorno, mese, anno)\n");
  scanf("%d%d%d",&G,&M,&A);
  printf("%c\n", giorno(G,M,A));
  return 0;
} 