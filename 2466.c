#include <stdio.h>

int main() {
    int n, v;

    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        matriz[0][i] = v;
    }

    int k = 1, m = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == matriz[i][k]) {
                matriz[i+1][j] = 1;
            }
            else
                matriz[i+1][j] = -1;
            k++;
        }
        k = 1;
        m--;
    }

    if (matriz[n-1][0] == 1)
        printf("preta\n");
    else
        printf("branca\n");

    return 0;
}