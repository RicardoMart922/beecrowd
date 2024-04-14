#include <stdio.h>

int main() {
    double valor_entrada;

    scanf("%lf", &valor_entrada);

    if (valor_entrada >= 0 && valor_entrada <= 25)
        printf("Intervalo [0,25]\n");
    else if (valor_entrada > 25 && valor_entrada <= 50)
        printf("Intervalo (25,50]\n");
    else if (valor_entrada > 50 && valor_entrada <= 75)
        printf("Intervalo (50,75]\n");
    else if (valor_entrada > 75 && valor_entrada <= 100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}