#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_palavras;
    int flag = 0;

    while (1) {
        cin >> qtde_palavras;
        cin.ignore();

        if (!qtde_palavras) break;
        flag++;
        if (flag > 1) cout << '\n';

        string vetor[qtde_palavras];

        for (auto &x: vetor)
            cin >> x;
        
        int maior_tamanho = 0;
        for (int i = 0; i < qtde_palavras; i++)
            maior_tamanho = max(maior_tamanho, (int) vetor[i].size());

        for (int i = 0; i < qtde_palavras; i++) {
            int diferenca = maior_tamanho - vetor[i].size();

            if (vetor[i].size() < maior_tamanho) {
                while (diferenca--) cout << ' ';
            }

            cout << vetor[i] << '\n';
        }

    }

    return 0;
}