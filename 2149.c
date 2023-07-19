#include <stdio.h>
#include <stdlib.h>

#define TAM 20

typedef unsigned long long ull;

void preencher_vetor(ull *);

int main() {
    ull vetor[TAM];
    int n;

    preencher_vetor(vetor);

    while (scanf("%d", &n) != EOF) {
        printf("%lld\n", vetor[n-1]);
    }


    return 0;
}

void preencher_vetor(ull *vetor) {
    ull i = 2, x = 0, y = 1, z = 0, w = 0;

    vetor[0] = 0;
    vetor[1] = 1;
    while (i < TAM) {
        z = x + y;
        w = z * y;

        vetor[i] = z, i++;
        vetor[i] = w, i++;
              
        x = z, y = w;
    }

}