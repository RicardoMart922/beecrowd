#include <cstdio>

using namespace std;

int main() {
    long long valor, valor_anterior, resposta, flag = 1;

    while (scanf("%lld", &valor) != EOF) {
        if (flag) {
            valor_anterior = valor;
            flag = 0;
        } else {
            if (valor < valor_anterior) {
                resposta = valor_anterior + 1;
                break;
            } else {
                resposta = valor + 1;
            }
        }
        valor_anterior = valor;
    }

    printf("%lld\n", resposta);
    return 0;
}