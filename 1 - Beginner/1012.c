#include <stdio.h>

#define PI 3.14159

int main() {
    double valor_a, valor_b, valor_c;
    double area_triangulo_retangulo;
    double area_circulo;
    double area_trapezio;
    double area_quadrado;
    double area_retangulo;

    scanf("%lf%lf%lf", &valor_a, &valor_b, &valor_c);

    area_triangulo_retangulo = (valor_a * valor_c) / 2.0;    // a = b * h / 2
    area_circulo = PI * (valor_c * valor_c);                 // a = pi * r²
    area_trapezio = (valor_a + valor_b) * valor_c / 2.0;     // a = (b + B) * h / 2
    area_quadrado = valor_b * valor_b;                       // a = l²
    area_retangulo = valor_a * valor_b;                      // a = b * h

    printf("TRIANGULO: %.3lf\n", area_triangulo_retangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}