#include <stdio.h>

int main() {
    int valor_a, valor_b, valor_c, valor_d;
    int soma_ab, soma_cd;

    scanf("%d%d%d%d", &valor_a, &valor_b, &valor_c, &valor_d);

    if (valor_b > valor_c && 
        valor_d > valor_a && 
        (valor_c + valor_d) > (valor_a + valor_b) && 
        valor_c > 0 && 
        valor_d > 0 && 
        valor_a % 2 == 0)
        printf("Valores aceitos\n");
    else 
        printf("Valores nao aceitos\n");
        
    return 0;
}