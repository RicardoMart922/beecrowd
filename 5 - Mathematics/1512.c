#include <stdio.h>

int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n, a, b;

    while (1) {
        scanf("%d %d %d", &n, &a, &b);

        if (!n && !a && !b) break;

        long long r = n/a + n/b - n / lcm(a, b);

        printf("%d\n", r);

    }

    return 0;
}