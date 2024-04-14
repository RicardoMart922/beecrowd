#include <stdio.h>

int main() {
    int distancia_total_percorrida;
    double total_combustivel_gasto;
    double consumo_medio;

    scanf("%d", &distancia_total_percorrida);
    scanf("%lf", &total_combustivel_gasto);

    consumo_medio = distancia_total_percorrida / total_combustivel_gasto;

    printf("%.3lf km/l\n", consumo_medio);
    
    return 0;
}