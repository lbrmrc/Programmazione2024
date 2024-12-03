#include <stdio.h>

int main() {
  int a[10] = {4, 3, 8, 9, 0, 2, 3, 8, 5, 3};
  int i;
  FILE *pfb;
  pfb = fopen("interi.dat", "wb");
  for (i = 0; i < 10; i++)
    fwrite(&a[i], sizeof(int), 1, pfb);
  fclose(pfb);
  return 0;
}