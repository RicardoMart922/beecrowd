#include <stdio.h>

int main() {
    int numero_funcionario, qtde_horas_trabalhadas;
    double valor_hora_trabalhada, salario_funcionario;

    scanf("%d", &numero_funcionario);
    scanf("%d", &qtde_horas_trabalhadas);
    scanf("%lf", &valor_hora_trabalhada);

    salario_funcionario = qtde_horas_trabalhadas * valor_hora_trabalhada;

    printf("NUMBER = %d\n", numero_funcionario);
    printf("SALARY = U$ %.2lf\n", salario_funcionario);

    return 0;
}