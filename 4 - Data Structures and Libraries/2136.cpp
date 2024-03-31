#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string nome, opcao, primeiro;
    set<string> conjunto_sim, conjunto_nao;

    while (cin >> nome && nome != "FIM") {
        cin >> opcao;

        if (opcao == "YES") {
            if (nome.size() > primeiro.size())
                primeiro = nome;
        
            conjunto_sim.insert(nome);
        } else {
            conjunto_nao.insert(nome);
        }
    }

    for (auto &x: conjunto_sim)
        cout << x << '\n';
    
    for (auto &x: conjunto_nao)
        cout << x << '\n';

    cout << '\n';
    cout << "Amigo do Habay:\n" << primeiro << '\n';

    return 0;
}