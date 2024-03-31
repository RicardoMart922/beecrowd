#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int peso;
    int idade;
    double altura;
} Rena;

bool comparacao(Rena &a, Rena& b);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int casos_teste, teste = 1;

    cin >> casos_teste;

    while (casos_teste--) {
        int qtde_renas, qtde_puxar_treno;

        cin >> qtde_renas >> qtde_puxar_treno;

        vector<Rena> lista_renas(qtde_renas);

        for (int i = 0; i < qtde_renas; i++)
            cin >> lista_renas[i].nome >> lista_renas[i].peso >> lista_renas[i].idade >> lista_renas[i].altura;

        sort(lista_renas.begin(), lista_renas.end(), comparacao);

        cout << "CENARIO {" << teste++ << "}\n";

        for (int i = 0; i < qtde_puxar_treno; i++) 
            cout << (i + 1) << " - " << lista_renas[i].nome << '\n';
    }

    return 0;
}

bool comparacao(Rena &a, Rena& b) {
    if (a.peso == b.peso) {
        if (a.idade == b.idade) {
            if (a.altura == b.altura)
                return a.nome < b.nome;    
            return a.altura < b.altura;
        }
        return a.idade < b.idade;
    }
    return a.peso > b.peso;
}