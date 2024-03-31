#include <bits/stdc++.h>

using namespace std;

bool comparacao(string *vetor, int tamanho);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int casos_teste;

    cin >> casos_teste;

    while (casos_teste--) {
        int qtde_pessoas;

        cin >> qtde_pessoas;

        string vetor_idiomas[qtde_pessoas];

        for (int i = 0; i < qtde_pessoas; i++)
            cin >> vetor_idiomas[i];

        if (comparacao(vetor_idiomas, qtde_pessoas)) {
            cout << vetor_idiomas[0] << '\n';
        } else {
            cout << "ingles\n";
        }
    }

    return 0;
}

bool comparacao(string *vetor, int tamanho) {
    string primeiro_elemento = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] != primeiro_elemento)
            return false;
    }

    return true;
}