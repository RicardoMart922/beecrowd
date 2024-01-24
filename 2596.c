#include <stdio.h>
#include <math.h>

int main() {
    int qtde_test, number;

    scanf("%d", &qtde_test);

    while (qtde_test--) {
        scanf("%d", &number);

        int ans = sqrt(number);

        printf("%d\n", number - ans); 
    }

    return 0;
}