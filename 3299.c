#include <stdio.h>

int main() {
    long long unsigned int n, m, r;
    int sorte = 0;
    
    scanf("%llu", &n);
    
    m = n;
    while (m > 0) {
        r = m % 10;
        if (r == 3 && (m/10)%10 == 1) {
            sorte = 1;
            break;
        }
        m /= 10;
    }
    
    printf("%llu%s es de Mala Suerte\n", n, (!sorte? " NO" : ""));

    return 0;
}