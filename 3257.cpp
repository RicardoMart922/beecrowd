#include <cstdio>
#include <algorithm>

using namespace std;

int comparacao(const void* a, const void *b) {
    return *(int *) b - *(int *) a;
}

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    qsort(vetor, n, sizeof(n), comparacao);

    int resposta = vetor[0] + 2;
    for (int i = 1; i < n; ++i) {
        if (i + 2 + vetor[i] > resposta)
            resposta = i + 2 + vetor[i];
    }

    printf("%d\n", resposta);

    return 0;
}
