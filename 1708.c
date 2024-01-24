#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float qtde;

    scanf("%f %f", &x, &y);

    qtde = y / (y - x);

    printf("%.0f\n", ceil(qtde));

    return 0;
}
