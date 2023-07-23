#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

typedef long long ll;

ll vetor[(ll) 1e6 + 5];

ll resposta(ll valor) {
    if (vetor[valor] != -1) return vetor[valor];

    return vetor[valor] = (resposta(valor-1) + resposta(valor-2) + resposta(valor-3)) % MOD;
}

ll iterativa(ll valor) {
    if (valor == 1 || valor == 2) return valor;
    if (valor == 3) return 4;
    
    ll a = 1, b = 2, c = 4;
    ll resultado = 0;
    
    for (ll i = 4; i <= valor; i++) {
        resultado = (a + b + c) % MOD;
        a = b;
        b = c;
        c = resultado;
    }
    
    return resultado;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll entrada;

    memset(vetor, -1, sizeof(vetor));
    vetor[1] = 1;
    vetor[2] = 2;
    vetor[3] = 4;

    cin >> entrada;
    cout << iterativa(entrada) << '\n';
    return 0;
}