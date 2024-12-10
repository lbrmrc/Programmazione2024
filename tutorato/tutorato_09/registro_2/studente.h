#define MAX_NOME 20

typedef struct {
    char nome[MAX_NOME];
    int eta;
    float voto_medio;
} Studente;

void stampa_studente(const Studente* s);

