#include <stdio.h>

int main() {
    int t, n, m;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &m);

        int x = n / 3;
        int y = m / 3;

        printf("%d\n", x * y);
    }

    return 0;
}