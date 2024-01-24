#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int vetor[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    
    int soma_a = vetor[0], soma_b = vetor[n-1];
    int x = 0, y = n - 1;

    for (int i = 0; i < n; i++) {
        if (soma_a <= soma_b) {
            x++;
            soma_a += vetor[x];
        } else if (soma_a > soma_b) {
            y--;
            soma_b += vetor[y];
        }
    }

    printf("%d\n", x);

    return 0;
}