#include <stdio.h>

int main() {
    double valor_a, valor_b;

    scanf("%lf %lf", &valor_a, &valor_b);

    printf("%.2lf%%\n", (((valor_b*100)/valor_a)-100));

    return 0;
}