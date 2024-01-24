#include <stdio.h>

#define MIN(a, b) (a >= b) ? a : b

int divisor_comum(int x, int y) {
    int n = MIN(x, y);

    for (int i = n; i >= 1; --i) {
        if (x % i == 0 && y % i == 0)
            return i;
    }
}

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int numerador, denominador, divisor;
    if (b == d) {
        numerador = a + c;
        denominador = b;
    } 
    else {
        numerador = (a * d) + (b * c);
        denominador = b * d;
    }
    divisor = divisor_comum(numerador, denominador);
    
    printf("%d %d\n", numerador / divisor, denominador / divisor);

    return 0;
}