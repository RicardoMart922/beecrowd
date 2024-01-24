#include <stdio.h>
#include <math.h>

#define MAX(a, b) (a > b) ? a : b

int main() {
    int l, c, r1, r2;
    while (1) {
        scanf("%d %d %d %d", &l, &c, &r1, &r2);

        if (l+c+r1+r2 == 0) break;

        int maior = (r1 > r2) ? r1 + r1 : r2 + r2;

        char resposta = 'N';
        if (maior <= l && maior <= c) { // Diâmetro do maior cilindro
            if (sqrt(pow((l-r2-r1), 2)+pow((c-r2-r1), 2)) >= r1+r2) { 
                resposta = 'S';
            }
        }
        printf("%c\n", resposta);
    }

    return 0;
}