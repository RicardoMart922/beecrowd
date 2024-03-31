#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste, qtde_entradas, valor_hash;
    string entrada;

    cin >> casos_teste;

    while (casos_teste--) {
        valor_hash = 0;

        cin >> qtde_entradas;

        for (int i = 0; i < qtde_entradas; i++) {
            cin >> entrada;

            for (int j = 0; j < entrada.size(); j++) {
                valor_hash += entrada[j] % 65 + i + j;
            }
        }

        cout << valor_hash << '\n';
    }

    return 0;
}