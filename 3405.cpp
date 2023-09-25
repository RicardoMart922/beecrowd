#include <bits/stdc++.h>

using namespace std;

int zeros_direita_fat(int numero) {
    if (numero < 0) return -1;

    int contador = 0;

    for (int i = 5; numero / i >= 1; i *= 5) {
        contador += numero / i;
    }

    return contador;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numero;

    cin >> numero;

    cout << zeros_direita_fat(numero) << '\n';

    return 0;
}