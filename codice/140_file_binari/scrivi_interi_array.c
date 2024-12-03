#include <stdio.h>

int main() {
  int a[10] = {4, 3, 8, 9, 0, 2, 3, 8, 5, 3};
  FILE *pfb;
  pfb = fopen("interi.dat", "wb");
  fwrite(a, sizeof(int), 10, pfb);
  fclose(pfb);
  return 0;
}