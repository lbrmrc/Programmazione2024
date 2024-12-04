#define DIM 1000

typedef struct {
    char nome[31];
    float calorie;
} Cibo;

typedef struct {
    int n_elementi;
    Cibo dati[DIM];
} Lista;