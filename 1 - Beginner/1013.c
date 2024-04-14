#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor_a, valor_b, valor_c;
    int maior_ab, maior;

    scanf("%d%d%d", &valor_a, &valor_b, &valor_c);

    // 1º Passo
    maior_ab = (valor_a + valor_b + abs(valor_a - valor_b)) / 2;

    // Expressão ? comando_1 : comando_2
    maior = (maior_ab > valor_c) ? maior_ab : valor_c; // Operador Ternario

    printf("%d eh o maior\n", maior);

    return 0;
}