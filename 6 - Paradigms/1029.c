#include <stdio.h>

long long int vetor_chamadas[40];

long long int fibonacci(int n){
    long long int a = 1, b = 1, c;
    int i = 2;
    if(n == 1)
        return a;
    else{
        if(n == 2)
            return b;
        else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}

void qtde_chamadas() {
    vetor_chamadas[0] = vetor_chamadas[1] = 0;
    for (int i = 2; i < 40; i++) 
        vetor_chamadas[i] = vetor_chamadas[i-1] + vetor_chamadas[i-2] + 2;
}

int main() {
    int casos_teste;

    scanf("%d", &casos_teste);

    qtde_chamadas();

    while (casos_teste--) {
        int n;
        
        scanf("%d", &n);

        printf("fib(%d) = %lld calls = %lld\n", n, vetor_chamadas[n], fibonacci(n));
    }

    return 0;
}