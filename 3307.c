#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int qtde_test;

    scanf("%d", &qtde_test);

    while (qtde_test--) {
        double area, raio;
        scanf("%lf", &area);

        raio = sqrt(area / (4 * PI));

        if(raio <= 12)
			printf("vermelho = R$ %.2lf\n", area * 0.09);
		else if(raio <= 15)
			printf("azul = R$ %.2lf\n", area * 0.07);
		else
			printf("amarelo = R$ %.2lf\n", area * 0.05);
    }

    return 0;
}