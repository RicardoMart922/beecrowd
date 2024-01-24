#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    int tempo_total;
} Carro;

int comparador(const void *a, const void *b) {
    return ((Carro*)a)->tempo_total - ((Carro*)b)->tempo_total;
}

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    Carro corredores[n];

    for (int i = 0; i < n; i++) {
        corredores[i].numero = i + 1;
        corredores[i].tempo_total = 0;
        for (int j = 0; j < m; j++) {
            int tempo;
            scanf("%d", &tempo);

            corredores[i].tempo_total += tempo;
        }
    }

    qsort(corredores, n, sizeof(Carro), comparador);

    printf("%d\n", corredores[0].numero);
    printf("%d\n", corredores[1].numero);
    printf("%d\n", corredores[2].numero);

    return 0;
}
