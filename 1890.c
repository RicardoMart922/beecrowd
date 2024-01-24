#include <stdio.h>

long long fatorial(long long n) {
    long long fat = 1;

    while (n >= 1) {
        fat *= n;
        n--;
    }

    return fat;
}

int main() {
    long long c, d, m, p;

    scanf("%lld %lld", &c, &d);

    m = fatorial(10);
    p = fatorial(d);

    printf("%lld\n", m);
        
    return 0;
}