#include <stdio.h>

typedef unsigned long long ull;

int main() {
    ull A, B, C;
    ull X, Y, Z;

    scanf("%lld %lld %lld", &A, &B, &C);
    scanf("%lld %lld %lld", &X, &Y, &Z);

    printf("%lld\n", ((X / A) * (Y / B) * (Z / C)));

    return 0;
}