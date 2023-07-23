#include <stdio.h>
#include <math.h>

typedef long long ll;

ll qtde_quadrados_perfeitos(ll l, ll r) {
    ll inferior = ceil(sqrt(l));
    ll superior = floor(sqrt(r));

    return (superior - inferior) + 1;
}

int main() {

    int casos_teste;

    scanf("%d", &casos_teste);

    while (casos_teste--) {
        ll l, r, qtde = 0;

        scanf("%lld%lld", &l, &r);

        printf("%lld\n", qtde_quadrados_perfeitos(l, r));
    }

    return 0;
}