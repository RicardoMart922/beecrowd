#include <bits/stdc++.h>

using namespace std;

bool compara(vector<string> a, vector<string> b) {
    if (a <= b) return true;
    return false;
}

int main() {
    int qtde_nomes;

    cin >> qtde_nomes;

    vector<string> vetor_nomes(qtde_nomes);
    for (int i = 0; i < qtde_nomes; i++)
        cin >> vetor_nomes[i];

    sort(vetor_nomes.begin(), vetor_nomes.end(), compara);

    for (int i = 0; i < qtde_nomes; i++)
        cout << vetor_nomes[i] << '\n';

    return 0;
}