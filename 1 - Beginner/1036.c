#include <stdio.h>
#include <math.h>

int main() {
    double valor_a, valor_b, valor_c;
    double delta;
    double valor_x1, valor_x2;

    scanf("%lf%lf%lf", &valor_a, &valor_b, &valor_c);

    // Delta
    delta = (valor_b * valor_b) - 4 * valor_a * valor_c;

    if (delta < 0 || valor_a == 0) {
        printf("Impossivel calcular\n");
    } else {
        valor_x1 = (-valor_b + sqrt(delta)) / (2 * valor_a);
        valor_x2 = (-valor_b - sqrt(delta)) / (2 * valor_a);

        printf("R1 = %.5lf\n", valor_x1);
        printf("R2 = %.5lf\n", valor_x2);
    }

    return 0;
}