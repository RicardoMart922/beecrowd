#include <stdio.h>
#include <math.h>

double calcular_area_triangulo(double ma, double mb, double mc) {
    double s = (ma + mb + mc) / 2;
    double area = (4.0F / 3.0F) * sqrt(s * (s - ma) * (s - mb) * (s - mc));
    return area;
}

int main() {
    double ma, mb, mc;

    while (scanf("%lf %lf %lf", &ma, &mb, &mc) != EOF) {
        if (ma + mb > mc && ma + mc > mb && mb + mc > ma) {
            double area = calcular_area_triangulo(ma, mb, mc);
            printf("%.3lf\n", area);
        } else {
            printf("-1.000\n");
        }
    }

    return 0;
}
