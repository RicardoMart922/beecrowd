#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    cout << fixed << setprecision(1);
    
    int qtde_pessoas;
    long double qtde_litros, qtde_litros_cuia;
    
    cin >> qtde_pessoas >> qtde_litros >> qtde_litros_cuia;
    
    vector<string> nomes(qtde_pessoas);
    
    for (int i = 0; i < qtde_pessoas; i++)
        cin >> nomes[i];
    
    int indice = 0;
    
    qtde_litros -= (floor(qtde_litros / (qtde_litros_cuia * qtde_pessoas)) * qtde_litros_cuia * qtde_pessoas);
    
    if (qtde_litros < 0.0001) {
        indice = qtde_pessoas - 1;
        qtde_litros = qtde_litros_cuia;
    }
    
    while (qtde_litros - qtde_litros_cuia > 0.0001) {
        indice++;
        qtde_litros -= qtde_litros_cuia;
    }
    
    cout << nomes[indice] << " " << qtde_litros << "\n";
    
    return 0;
}