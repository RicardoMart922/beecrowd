#include <bits/stdc++.h>

using namespace std;

void descodificacao(string entrada, int valor) {
    char alfabeto[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    
    for (int i = 0; i < entrada.size(); i++) {
        int p = ((entrada[i] - valor) + 65) % 26;
        cout << alfabeto[p];
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    int casos;

    cin >> casos;

    while (casos--) {
        string entrada;
        int deslocacao;

        cin >> entrada >> deslocacao;

        descodificacao(entrada, deslocacao);
    }

    return 0;
}