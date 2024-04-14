#include <stdio.h>

int main() {
    int a;

    while (scanf("%d", &a) != EOF) {
        if (a % 6 == 0)
            printf("Y\n");
        else
            printf("N\n");
    } 

    return 0;
}