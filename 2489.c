#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double calcular_altura_do_coelho(double A, double D, double R) {
    return A + tan((R - 90.0F) * (PI/180.0F)) * D;
}

int main() {
    double A, D, R;

    while (scanf("%lf %lf %lf", &A, &D, &R) != EOF) {
        double resultado = calcular_altura_do_coelho(A, D, R);
        printf("%.4lf\n", resultado);
    }

    return 0;
}
