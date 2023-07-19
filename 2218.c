#include <stdio.h>

int main() {
    long qtde_teste, qtde_linhas;

    scanf("%ld", &qtde_teste);

    while (qtde_teste--) {
        scanf("%ld", &qtde_linhas);

        printf("%ld\n", (((qtde_linhas * (qtde_linhas + 1)) / 2) + 1));
    }

    return 0;
}