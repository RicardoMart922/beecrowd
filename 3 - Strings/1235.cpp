#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste, tamanho;
    string entrada;

    cin >> casos_teste;
    cin.ignore();

    while (casos_teste--) {
        getline(cin, entrada);

        tamanho = entrada.size();

        for (int i = (tamanho / 2) - 1; i >= 0; i--)
            cout << entrada[i];

        for (int j = tamanho - 1; j >= tamanho / 2; j--)
            cout << entrada[j];

        cout << '\n';
    }

    return 0;
}