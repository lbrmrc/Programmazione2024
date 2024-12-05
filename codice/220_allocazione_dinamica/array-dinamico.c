#include <malloc.h>

int *alloca(int quanti_interi) {
  int *p;
  p = malloc(sizeof(int) * quanti_interi);
  return p;
}

int main() {
  int *pa;
  int dl, i;

  printf("Quanti interi?\n");
  scanf("%d", &dl);

  pa = alloca(dl);

  for (i = 0; i < dl; i++)
    scanf("%d", &pa[i]); //  oppure pa+i

  free(pa);
  return 0;
}