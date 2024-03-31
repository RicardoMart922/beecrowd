#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste, divisor;
    int n1_int, d1_int, n2_int, d2_int;
    char operacao;

    scanf("%d", &casos_teste);

    for (int i = 0; i < casos_teste; i++) {
        scanf("%d / %d %c %d / %d", &n1_int, &d1_int, &operacao, &n2_int, &d2_int);

        if (operacao == '/') {
            n1_int = n1_int * d2_int;
            d1_int = n2_int * d1_int;

            divisor = mdc(n1_int, d1_int);

            printf("%d/%d = ", n1_int, d1_int);
            printf("%d/%d\n", n1_int/divisor, d1_int/divisor);
        } else {
            int denominador = d1_int * d2_int;
            int numerador;
            if (operacao == '+') {
                numerador = n1_int * (denominador / d1_int) + n2_int * (denominador / d2_int);
            } else if (operacao == '-') {
                numerador = n1_int * (denominador / d1_int) - n2_int * (denominador / d2_int);
            } else if (operacao == '*') {
                numerador = n1_int * n2_int;
            }
            
            divisor = mdc(numerador, denominador);

            if (divisor < 0)
                divisor = (-1) * divisor;

            printf("%d/%d = ", numerador, denominador);
            printf("%d/%d\n", numerador/divisor, denominador/divisor);   
        }
    }

    return 0;
}

int mdc(int a,int b) {
    if(b == 0) 
        return a;

    return mdc(b, a % b);
}