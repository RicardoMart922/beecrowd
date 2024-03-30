#include <stdio.h>

int main() {
    int n1, d1, v1;
    int n2, d2, v2;

    scanf("%d %d %d", &n1, &d1, &v1);
    scanf("%d %d %d", &n2, &d2, &v2);

    if (d1 == d2) {
        if (v1 > v2) 
            printf("%d\n", n1);
        else
            printf("%d\n", n2);
    } 
    else if (v1 == v2) {
        if (d1 < d2) 
            printf("%d\n", n1);
        else
            printf("%d\n", n2);
    }
    else {
        double vm1 = v1 / 3.6;
        double vm2 = v2 / 3.6;

        double t1 = d1 / vm1;
        double t2 = d2 / vm2;

        if (t2 < t1) 
            printf("%d\n", n2);
        else
            printf("%d\n", n1);
    }

    return 0;
}