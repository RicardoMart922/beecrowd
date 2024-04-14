#include <stdio.h>

int main() {
    double valor_em_reais, valor_em_centavos;

    scanf("%lf", &valor_em_reais);

    valor_em_centavos = valor_em_reais * 100;

    // Notas
    int notas_de_100 = valor_em_centavos / 10000;
    valor_em_centavos = valor_em_centavos - (notas_de_100 * 10000);

    int notas_de_50 = valor_em_centavos / 5000;
    valor_em_centavos = valor_em_centavos - (notas_de_50 * 5000);

    int notas_de_20 = valor_em_centavos / 2000;
    valor_em_centavos = valor_em_centavos - (notas_de_20 * 2000);

    int notas_de_10 = valor_em_centavos / 1000;
    valor_em_centavos = valor_em_centavos - (notas_de_10 * 1000);

    int notas_de_5 = valor_em_centavos / 500;
    valor_em_centavos = valor_em_centavos - (notas_de_5 * 500);

    int notas_de_2 = valor_em_centavos / 200;
    valor_em_centavos = valor_em_centavos - (notas_de_2 * 200);

    // Moedas
    int moedas_de_01 = valor_em_centavos / 100;
    valor_em_centavos = valor_em_centavos - (moedas_de_01 * 100);

    int moedas_de_50 = valor_em_centavos / 50;
    valor_em_centavos = valor_em_centavos - (moedas_de_50 * 50);

    int moedas_de_25 = valor_em_centavos / 25;
    valor_em_centavos = valor_em_centavos - (moedas_de_25 * 25);

    int moedas_de_10 = valor_em_centavos / 10;
    valor_em_centavos = valor_em_centavos - (moedas_de_10 * 10);

    int moedas_de_5 = valor_em_centavos / 5;
    valor_em_centavos = valor_em_centavos - (moedas_de_5 * 5);

    int moedas_de_1 = valor_em_centavos / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas_de_100);
    printf("%d nota(s) de R$ 50.00\n", notas_de_50);
    printf("%d nota(s) de R$ 20.00\n", notas_de_20);
    printf("%d nota(s) de R$ 10.00\n", notas_de_10);
    printf("%d nota(s) de R$ 5.00\n", notas_de_5);
    printf("%d nota(s) de R$ 2.00\n", notas_de_2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas_de_01);
    printf("%d moeda(s) de R$ 0.50\n", moedas_de_50);
    printf("%d moeda(s) de R$ 0.25\n", moedas_de_25);
    printf("%d moeda(s) de R$ 0.10\n", moedas_de_10);
    printf("%d moeda(s) de R$ 0.05\n", moedas_de_5);
    printf("%d moeda(s) de R$ 0.01\n", moedas_de_1);

    return 0;
}