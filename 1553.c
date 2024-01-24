#include <stdio.h>

int main() {
    int n, k;

    while (1) {
        int vetor[105] = {0};
        int valor, qtde = 0;

        scanf("%d %d", &n, &k);

        if (!n && !k) break;

        for (int i = 0; i < n; i++) {
            scanf("%d", &valor);
            vetor[valor]++;
        }

        for (int i = 1; i <= 100; i++) {
            if (vetor[i] >= k) qtde++;
        }

        printf("%d\n", qtde);
    }

    return 0;
}