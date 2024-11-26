typedef struct{
    int dato;
    int contatore_operazioni;
} Counter; // definizione del tipo astratto Counter

// dichiarazioni operazioni su C
void reset(Counter *pc);
void inc(Counter *pc);
int val (Counter c);