#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Ponto;

int main() {
    Ponto ponto_a, ponto_b;
    double distancia;

    scanf("%lf%lf", &ponto_a.x, &ponto_a.y);
    scanf("%lf%lf", &ponto_b.x, &ponto_b.y);

    distancia = sqrt(pow((ponto_b.x - ponto_a.x), 2) + pow((ponto_b.y - ponto_a.y), 2));

    printf("%.4lf\n", distancia);

    return 0;
}