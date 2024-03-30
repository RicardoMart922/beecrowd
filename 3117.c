#include <stdio.h>

int main() {
    long n, k, v, q = 0, flag = 1;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v);

        if (v <= 0) q++;

        if (q >= k) {
            printf("YES\n");
            flag = 0;
            break;
        }
    }

    if (flag) printf("NO\n");

    return 0;
}