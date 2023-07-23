#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_titans, tamanho_muralha, maior_indice;
    string sequencia_ataque;
    int pequeno, medio, grande;
    int indice_pequeno = 0, indice_medio = 0, indice_grande = 0;

    cin >> qtde_titans >> tamanho_muralha;

    int vetor_muralha[qtde_titans];

    for (int i = 0; i < qtde_titans; i++) {
        vetor_muralha[i] = tamanho_muralha;
    }

    cin >> sequencia_ataque;

    cin >> pequeno >> medio >> grande;

    for (auto &titan: sequencia_ataque) {
        while (vetor_muralha[indice_grande] < grande) {
            indice_grande++;
        }

        while (vetor_muralha[indice_medio] < medio) {
            indice_medio++;
        }

        while (vetor_muralha[indice_pequeno] < pequeno) {
            indice_pequeno++;
        }
        
        if (titan == 'G') {
            vetor_muralha[indice_grande] -= grande;
        } else if (titan == 'M') {
            vetor_muralha[indice_medio] -= medio;
        } else {
            vetor_muralha[indice_pequeno] -= pequeno;
        }
    }

    maior_indice = max(indice_grande, max(indice_medio, indice_pequeno));

    if (vetor_muralha[maior_indice] == tamanho_muralha)
        maior_indice--;

    cout << maior_indice + 1 << '\n';

    return 0;
}