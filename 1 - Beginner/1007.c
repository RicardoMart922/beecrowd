#include <stdio.h>

int main() {
    int valor_a, valor_b, valor_c, valor_d, diferenca;

    scanf("%d", &valor_a);
    scanf("%d", &valor_b);
    scanf("%d", &valor_c);
    scanf("%d", &valor_d);

    diferenca = (valor_a * valor_b) - (valor_c * valor_d);

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}