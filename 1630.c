#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int vetor[2];
    while (scanf("%d %d", &vetor[0], &vetor[1]) != EOF) {
        if (vetor[0] == vetor[1]) {
            printf("4\n");
        } else {
            int mdc = gcd(vetor[0], vetor[1]);
            printf("%d\n", (vetor[0] / mdc) * 2 + (vetor[1] / mdc) * 2);
        }
    }

    return 0;
}
