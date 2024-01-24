#include <stdio.h>
#include <math.h>

double area(int l) {
    double area_p = 0.25 * sqrt(5.0 * (5.0 + 2.0 * sqrt(5.0))) * l * l;
    return area_p;
}

int main() {
    int n, lado;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &lado);

        printf("%.3lf\n", area(lado));
    }

    return 0;
}
