#include <bits/stdc++.h>

using namespace std;

void imprimirUmaTabuada (int valor) {
    for (int i = 5; i <= 10; i++)
        cout << valor << " x " << i << " = " << valor * i << '\n';
}

void imprimirDuasTabuadas (int valor_x, int valor_y) {
    for (int i = 5; i <= 10; i++) {
        cout << valor_x << " x " << i << " = " << valor_x * i << " && ";
        cout << valor_y << " x " << i << " = " << valor_y * i << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numero_teste;

    cin >> numero_teste;

    while (numero_teste--) {
        int x, y;
        char operacao;

        cin >> x >> operacao >> y;

        if (x == y)
            imprimirUmaTabuada(x);
        else
            imprimirDuasTabuadas(x, y);
    }

    return 0;
}