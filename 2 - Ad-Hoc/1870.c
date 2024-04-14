#include <stdio.h>

int main() {
    int L, C, P;

    while (1) {
        scanf("%d %d %d", &L, &C, &P);

        if (!L && !C && !P) break;

        int matriz[L+5][C+5];
        for (int i = 1; i <= L; i++)
            for (int j = 1; j <= C; j++)
                scanf("%d", &matriz[i][j]);

        int flag = 1;
        for (int i = 1; i <= L; i++) {
            if (matriz[i][P] != 0) {
                printf("BOOM %d %d\n", i, P);
                flag = 0;
                break;
            }

            int m = P + 1;
            int n = P - 1;
            
            while (matriz[i][m] == 0 && m < C) {
                m++;
            }
            while (matriz[i][n] == 0 && n > 1) {
                n--;
            }

            if (matriz[i][m] > matriz[i][n]) 
                P = P - (matriz[i][m] - matriz[i][n]);
            else if (matriz[i][m] < matriz[i][n]) 
                P = P + (matriz[i][n] - matriz[i][m]);

            if (P <= 1 || P >= C) {
                printf("BOOM %d %d\n", i, P);
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("OUT %d\n", P);
        }
    }

    return 0;
}