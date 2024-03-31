#include <stdio.h>
#include <string.h>

int main() {
    int casos_teste, i, j, tamanho;
    char entrada[52], saida[52];

    scanf("%d%*c", &casos_teste);

    while (casos_teste--) {
        fgets(entrada, 52, stdin);

        tamanho = strlen(entrada) - 1;

        for (i = 0, j = 0; i < tamanho; ++i) {
            if (entrada[i] != ' ' && (!i || entrada[i-1] == ' '))
                saida[j++] = entrada[i];
        }

        saida[j] = '\0';

        puts(saida);
    }
}