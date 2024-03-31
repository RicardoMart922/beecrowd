#include <bits/stdc++.h>

#define MOD 257
#define MAX 80

using namespace std;

int string_for_int(string, int);

int main() {
    int qtde_elementos = 0;
    int F, M, L;
    string aux_1, aux_2, aux_3, C;
    vector<string> str(MAX);
    string input;

    while (cin >> input) str[qtde_elementos] = input, qtde_elementos++;

    int qtde_colunas = str[0].size(); 
    for (int j = 0; j < qtde_colunas - 2; j++) {
        for (int i = 0; i < qtde_elementos; i++) {
            if (j == 0) {
                aux_1.push_back(str[i][0]);
                aux_2.push_back(str[i][qtde_colunas - 1]);
                
                F = string_for_int(aux_1, aux_1.size());
                L = string_for_int(aux_2, aux_2.size());
            } 
            aux_3.push_back(str[i][j + 1]);

            M = string_for_int(aux_3, aux_3.size());
        }
        aux_3.erase();

        C.push_back((F * M + L) % MOD);
    }

    cout << C << '\n';

    return 0;
}

int string_for_int(string valor_str, int tamanho_str) {
    int soma = 0;
    for (int i = 0, j = tamanho_str - 1; i < tamanho_str; i++, j--)
        soma += (valor_str[i] - '0') * pow(10, j);
    
    return soma;
}