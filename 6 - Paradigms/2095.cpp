#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_soldados, resposta = 0;

    cin >> qtde_soldados;

    vector<int> vetor_q(qtde_soldados);
    vector<int> vetor_l(qtde_soldados);

    for (auto &x: vetor_q) cin >> x;
    for (auto &x: vetor_l) cin >> x;

    sort(vetor_q.begin(), vetor_q.end());
    sort(vetor_l.begin(), vetor_l.end());

    for (int i = 0, j = 0; j < qtde_soldados; j++) {
        if (vetor_q[i] >= vetor_l[j])
            continue;
        resposta++;
        i++;
    }

    cout << resposta << '\n';

    return 0;
}