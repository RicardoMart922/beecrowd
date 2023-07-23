#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste;
    int m, n, valor;
    bool flag = 0;

    cin >> casos_teste;

    while (casos_teste--) {
        cin >> m >> n;

        vector<int> vetor[m];

        for (int i = 0; i < n; i++) {
            cin >> valor;
            int posicao = valor % m;

            vetor[posicao].push_back(valor); 
        }

        if (flag) cout << '\n';

        for (int i = 0; i < m; i++) {
            cout << i << " -> ";

            for (auto &x: vetor[i]) {
                cout << x << " -> ";
            } 

            cout << "\\\n";
        }

        flag = 1;
    }

    return 0;
}