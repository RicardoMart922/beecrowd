#include <bits/stdc++.h>

using namespace std;

string remover_espaco(string str) {
    int i = 0, j = str.size() - 1;
    string aux;

    while (str[i] == ' ') {
        i++;
    }

    while (str[j] == ' ') {
        j--;
    }

    int flag = 0;
    for (i; i <= j; i++) {
        if (str[i] != ' ')
            aux.push_back(str[i]);
        
        if (str[i] == ' ') {
            while (str[i] == ' ') {
                if (str[i+1] != ' ') {
                    aux.push_back(str[i]);    
                    break;
                }
                i++;
            }
        }
        

    }

    return aux;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_frases;
    int flag = 0;
    string frase;

    while (1) {
        cin >> qtde_frases;
        cin.ignore();

        if (!qtde_frases) break;
        flag++;
        if (flag > 1) cout << '\n';

        string vetor[qtde_frases];

        for (auto &x: vetor) {
            getline(cin, frase);

            x = remover_espaco(frase);
        }
        
        int maior_tamanho = 0;
        for (int i = 0; i < qtde_frases; i++)
            maior_tamanho = max(maior_tamanho, (int) vetor[i].size());

        for (int i = 0; i < qtde_frases; i++) {
            int diferenca = maior_tamanho - vetor[i].size();

            if (vetor[i].size() < maior_tamanho) {
                while (diferenca--) cout << ' ';
            }

            cout << vetor[i] << '\n';
        }
    }

    return 0;
}