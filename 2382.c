#include <stdio.h>
#include <math.h>

int main() {
    int L, A, P, R;

    scanf("%d %d %d %d", &L, &A, &P, &R);

    int diametro_esfera = 2 * R;
    double diagonal_caixa =  sqrt((L*L) + (A*A) + (P*P));

    if (diagonal_caixa <= diametro_esfera) {
        printf("S\n"); 
    } else {
        printf("N\n"); 
    }

    return 0;
}
