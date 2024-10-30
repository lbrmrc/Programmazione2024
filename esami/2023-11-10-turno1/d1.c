int main(void) {
  int i, j;

  for (i = 1; i < 10; i++)
    for (j = i; j < 100; j++)
      j += j % i;
        
  return 0;
}