#include <stdio.h>

int main() {
    double salario_fixo, total_vendas_efetuadas, salario_final;

    scanf("%*s");
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas_efetuadas);

    salario_final = salario_fixo + (0.15 * total_vendas_efetuadas);

    printf("TOTAL = R$ %.2lf\n", salario_final);

    return 0;
}