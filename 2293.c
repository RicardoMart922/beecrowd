#include <stdio.h>

#define MAX(a, b) (a >= b) ? a : b

int main() {
    int n, m, v;

    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int soma_linha = 0, soma_coluna = 0, soma = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &v);
            matriz[i][j] = v;
            soma += v;
        }
        soma_linha = MAX(soma_linha, soma);
        soma = 0;
    }

    soma = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            soma += matriz[i][j];
        }
        soma_coluna = MAX(soma_coluna, soma);
        soma = 0;
    }

    int maior_soma = MAX(soma_linha, soma_coluna);
    printf("%d\n", maior_soma);

    return 0;
}