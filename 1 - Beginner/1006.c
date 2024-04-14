#include <stdio.h>

#define PESO_A 2
#define PESO_B 3
#define PESO_C 5

int main() {
    double nota_a, nota_b, nota_c, media;

    scanf("%lf", &nota_a);
    scanf("%lf", &nota_b);
    scanf("%lf", &nota_c);

    media = ((nota_a * PESO_A) + (nota_b * PESO_B) + (nota_c * PESO_C)) / (PESO_A + PESO_B + PESO_C);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}