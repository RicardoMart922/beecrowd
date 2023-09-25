#include <stdio.h>

int verificar(int a, int b, int c) {
    if (a*a == ((b*b) + (c*c)))
        return 1;
    return 0;
}

int area_semi_circuferencia(double r) {
    return (3 * r * r) / 2;
}

int area_triangulo(int b, int h) {
    return (b*h)/2;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (verificar(x, y, z))
        printf("AREA = %d\n", area_triangulo(y, z) + area_semi_circuferencia(z / 2.0));
    else
        printf("Nao eh retangulo!\n");
    return 0;
}