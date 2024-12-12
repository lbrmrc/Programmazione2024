int fattoriale(int n) {
  int p = 1;
  int i;
  for (i = n; i >= 1; i--) {
    p = p * i;
  }
  return p;
}

int fatt_r(int n) {
  if (n == 0) // caso base
    return 1;
  else // caso ricorsivo
    return n * fatt_r(n - 1);
}

int main() {
  int a = fatt_r(5);
  return 0;
}