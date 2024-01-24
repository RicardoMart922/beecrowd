#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparacao(pair<string, int> a, pair<string, int> b) {
    if (a.second > b.second)
        return true;
    return false;
}

void imprimir(vector<string> lista) {
    for (auto aluno : lista) {
        cout << aluno << '\n';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    int n, t;

    cin >> n >> t;
    cin.ignore();

    vector<pair<string, int>> vetor;

    string nome;
    int valor;

    for (int i = 0; i < n; i++) {
        cin >> nome >> valor;

        vetor.push_back({nome, valor});
    }

    sort(vetor.begin(), vetor.end(), comparacao);

    for (int j = 1; j <= t; ++j) {
        cout << "Time " << j << '\n';
        vector<string> lista;
        for (int i = j-1; i < n; i += t) {
            lista.push_back(vetor[i].first);
        }
        sort(lista.begin(), lista.end());
        imprimir(lista);
    }

    return 0;
}