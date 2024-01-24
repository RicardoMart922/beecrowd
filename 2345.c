#include <stdio.h>

int modulo(int v) {
    if (v < 0)
        return v * (-1);
    return v;
}

int main() {
    int vetor[4];
    int j1, j2, j3, j4, menor_diferenca;

    scanf("%d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3]);
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (vetor[i] > vetor[j]) {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    menor_diferenca = modulo((vetor[0] + vetor[3]) - (vetor[1] + vetor[2]));

    printf("%d\n", menor_diferenca);

    return 0;
}