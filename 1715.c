#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int flag = 1, resposta = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) resposta += 1;
        flag = 1;
    }

    printf("%d\n", resposta);


    return 0;
}