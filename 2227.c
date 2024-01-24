#include <stdio.h>
#include <string.h>

#define MAXSIZE 105

int voos[MAXSIZE];

int main () {
    int x, y;
    int qtde_aeroportos, qtde_voos, teste = 1;

    while (1) {
        scanf("%d %d", &qtde_aeroportos, &qtde_voos);

        if (!qtde_aeroportos && !qtde_voos) break;

        for (int i = 0; i < qtde_voos; i++)
            scanf("%d %d", &x, &y), voos[x]++, voos[y]++;

        int maior = -1;

        printf("Teste %d\n", teste++);

        for (int i = 1; i <= qtde_aeroportos; i++)
            if (voos[i] > maior)
                maior = voos[i];

        for (int i = 1; i <= qtde_aeroportos; i++)
            if (voos[i] == maior)
                printf("%d ", i);

        printf("\n\n");
        memset(voos, 0, sizeof(voos));
    }

    return 0;
}