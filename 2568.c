#include <stdio.h>

int main() {
    int d, i, x, f;

    scanf("%d %d %d %d", &d, &i, &x, &f);

    if (f % 2 == 0) {
        printf("%d\n", i);
    }
    else if (d % 2 != 0 && f % 2 != 0) {
        printf("%d\n", i + x);
    }
    else if (d % 2 == 0 && f % 2 != 0) {
        printf("%d\n", i - x);
    }

    return 0;
}