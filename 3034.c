#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n == 1)
        return 0;

    if (n == 2 || n == 3)
        return 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, v;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        v++;
        if (v % 7 == 0 && v % 2 != 0 && is_prime(v+2))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}