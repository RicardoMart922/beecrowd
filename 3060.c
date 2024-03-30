#include <stdio.h>
#include <math.h>

void print_ans1(double d, int p) { 
    for (int i = 0; i < p; i++)
        printf("%.0lf\n", d);
}

void print_ans2(double d, int p, int r) {
    int i = 0;
    for (i; i < r; i++) {
        printf("%.0lf\n", ceil(d));
    }
    for (i; i < p; i++) {
        printf("%.0lf\n", floor(d));
    }

}

int main() {
    int v, p;

    scanf("%d", &v);
    scanf("%d", &p);

    int r = v % p;
    double d = (double) v / p;

    if (r == 0) 
        print_ans1(d, p);
    else 
        print_ans2(d, p, r);

    return 0;
}