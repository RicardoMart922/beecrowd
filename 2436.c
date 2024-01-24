#include <stdio.h>

#define MAXN 1010

typedef struct {
    int valor;
    int flag;
} Item;

Item matriz[MAXN][MAXN];

void busca(int a, int b, int l, int c) {
    matriz[a][b].flag = 1;

    if (a+1 <= l && matriz[a+1][b].valor && !matriz[a+1][b].flag) busca(a+1, b, l, c);
    if (a-1 >= 1 && matriz[a-1][b].valor && !matriz[a-1][b].flag) busca(a-1, b, l, c);
    if (b+1 <= c && matriz[a][b+1].valor && !matriz[a][b+1].flag) busca(a, b+1, l, c);
    if (b-1 >= 1 && matriz[a][b-1].valor && !matriz[a][b-1].flag) busca(a, b-1, l, c);

    printf("%d %d\n", a, b);
}

int main() {
    int l, c, a, b;
    
    scanf("%d %d", &l, &c);
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= l; i++) {
        for (int j = 0; j <= c; j++) {
            scanf("%d", &matriz[i][j].valor);
            matriz[i][j].flag = 0;
        }
    }

    busca(a, b, l, c);

    return 0;
}