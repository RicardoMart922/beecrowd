#include <stdio.h>

#define PESO_A 3.5
#define PESO_B 7.5

int main() {
    double nota_a, nota_b, media;

    scanf("%lf", &nota_a);
    scanf("%lf", &nota_b);

    media = ((nota_a * PESO_A) + (nota_b * PESO_B)) / (PESO_A + PESO_B);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}