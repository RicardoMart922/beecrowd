#include <stdio.h>

#define LITROS_POR_KM 12

int main() {
    int tempo_gasto, velocidade_media;
    int distancia;
    double qtde_litros;

    scanf("%d", &tempo_gasto);
    scanf("%d", &velocidade_media);

    distancia = tempo_gasto * velocidade_media;

    qtde_litros = (double) distancia / LITROS_POR_KM;

    printf("%.3lf\n", qtde_litros);

    return 0;
}