#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int validade;
} Carne;

bool comparacao(Carne& a, Carne& b);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_carnes;

    while (cin >> qtde_carnes) {
        vector<Carne> vetor(qtde_carnes);
        
        for (int i = 0; i < qtde_carnes; i++) {
            cin >> vetor[i].nome >> vetor[i].validade;
            cin.ignore();
        }

        sort(vetor.begin(), vetor.end(), comparacao);

        for (int i = 0; i < qtde_carnes; i++) {
            if (i+1 == qtde_carnes)
                cout << vetor[i].nome << '\n';
            else 
                cout << vetor[i].nome << ' ';
        }

    }

    return 0;
}

bool comparacao(Carne& a, Carne& b) {
    if (a.validade >= b.validade)
        return false;
    return true;
}