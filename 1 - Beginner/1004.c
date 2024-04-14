#include <stdio.h>

int main() {
    int valor_a, valor_b, produto;

    scanf("%d", &valor_a);
    scanf("%d", &valor_b);

    produto = valor_a * valor_b;

    printf("PROD = %d\n", produto);

    return 0;
}