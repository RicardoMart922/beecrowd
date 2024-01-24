#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    while (n--) {
        int num1, num2, resultado;
        char operacao;
        scanf("%d %c %d = %d", &num1, &operacao, &num2, &resultado);

        int valor;
        if (operacao == '+')
            valor = num1 + num2;
        else if (operacao == '-')
            valor = num1 - num2;
        else 
            valor = num1 * num2;

        valor = abs(resultado - valor);
        
        char saida[1005];
        int i = 1;

        saida[0] = 'E';
        while (i <= valor) {
            saida[i++] = 'r';
        }

        saida[i++] = 'o';
        saida[i++] = 'u';
        saida[i++] = '!';
        saida[i] = '\0';

        printf("%s\n", saida);
    }

    return 0;
}