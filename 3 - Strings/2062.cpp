#include <bits/stdc++.h>

using namespace std;

void corrigir(string *vetor, int tamanho);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_palavras;

    cin >> qtde_palavras;

    string vetor_palavras[qtde_palavras];

    for (int i = 0; i < qtde_palavras; i++) {
        cin >> vetor_palavras[i];
    }

    corrigir(vetor_palavras, qtde_palavras);

    return 0;
}

void corrigir(string *vetor, int tamanho) {
    string URI = "URI";
    string OBI = "OBI";

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i].size() == 3) {
            if (vetor[i][0] == 'U' && vetor[i][1] == 'R')
                cout << URI;
            else if (vetor[i][0] == 'O' && vetor[i][1] == 'B')
                cout << OBI;
            else 
                cout << vetor[i]; 
        } else 
            cout << vetor[i];

        if (i+1 == tamanho) 
            cout << '\n';
        else 
            cout << ' ';
    }
}