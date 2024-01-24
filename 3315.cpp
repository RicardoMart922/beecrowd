#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define MAX(a, b) (a > b) ? a : b

void binario(int numero) {
    stack<int> pilha;

    while (numero >= 2) {
        int resto = numero % 2;
        numero = numero / 2;
        pilha.push(resto);
    }

    printf("%d", numero);

    while (!pilha.empty()) {
        printf("%d", pilha.top());
        pilha.pop();
    }

    printf("\n");
}

int main() {
    int maior = 0, qtde_dia, soma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%d", &qtde_dia);
            soma += qtde_dia;
        }
        maior = MAX(maior, soma);
        soma = 0;
    }

    printf("%d = ", maior);
    binario(maior);

    return 0;
}