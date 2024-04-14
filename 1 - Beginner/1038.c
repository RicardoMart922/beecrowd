#include <stdio.h>

int main () {
    int codigo, quantidade;
    double valor_pagar = 0.00;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo) {
        case 1:
            valor_pagar = quantidade * 4.00;
            break;
        case 2:
            valor_pagar = quantidade * 4.50;
            break;
        case 3:
            valor_pagar = quantidade * 5.00;
            break;
        case 4:
            valor_pagar = quantidade * 2.00;
            break;

        default:
            valor_pagar = quantidade * 1.50;
            break;
    }

    printf("Total: R$ %.2lf\n", valor_pagar);       

    return 0;
}