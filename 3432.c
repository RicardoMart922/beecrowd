#include <stdio.h>

#define TAMANHO 8

int main() {
    int numero, flag = 1;

    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &numero);

        if (numero == 9) {
            printf("F\n");
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("S\n");

    return 0;
}