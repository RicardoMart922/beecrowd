#include <stdio.h>

int main() {
    int flag = 1;
    long long int trem = 0;
    long long int capacidade_total;
    long long int numero_estacoes;

    long long int sairam;
    long long int entram;
    long long int ficam;

    scanf("%lld%lld", &capacidade_total, &numero_estacoes);

    while (numero_estacoes--) {
        scanf("%lld%lld%lld", &sairam, &entram, &ficam);

        if (sairam > trem) 
            flag = 0;

        trem -= sairam;

        if ((entram + trem) > capacidade_total)
            flag = 0;
        
        trem += entram;

        if (ficam) 
            if (trem != capacidade_total)
                flag = 0;
    }

    printf("%s\n", !(flag && !trem) ? "impossible" : "possible");

    return 0;
}