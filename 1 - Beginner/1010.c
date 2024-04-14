#include <stdio.h>

int main() {
    int numero_peca_1, numero_peca_2;
    double valor_unitario_peca_1, valor_unitario_peca_2;
    double total_a_pagar;

    scanf("%*d%d%lf", &numero_peca_1, &valor_unitario_peca_1);
    scanf("%*d%d%lf", &numero_peca_2, &valor_unitario_peca_2);

    total_a_pagar = (numero_peca_1 * valor_unitario_peca_1) + (numero_peca_2 * valor_unitario_peca_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total_a_pagar);

    return 0;
}