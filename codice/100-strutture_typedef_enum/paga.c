typedef enum { lun, mar, mer, gio, ven, sab, dom } Giorno;

int main() {
  int i;
  Giorno giorni[7] = {lun, mar, mer, gio, ven, sab, dom};
  float paga_oraria = 15.0;

  giorni[3] = 4; // non ha senso
  giorni[3] = ven;

  float paga[7]; // compenso giornaliero da lunedì a domenica
  float ore[7] = {6.5, 0, 8, 5, 4, 6, 5.5}; // ore lavorate da lunedì a domenica
  for (i = 0; i < 7; i++)
    if (giorni[i] == sab || giorni[i] == dom)
      paga[i] = paga_oraria * 1.5 * ore[i];
    else
      paga[i] = paga_oraria * ore[i];
  return 0;
} 