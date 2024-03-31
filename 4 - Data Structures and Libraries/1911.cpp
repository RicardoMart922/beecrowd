#include <iostream>
#include <map>

using namespace std;

int qtde_diferencas(string str1, string str2) {
    int qtde = 0;

    for (int i = 0; i < str1.size(); i++)
        if (str1[i] != str2[i]) 
            qtde++;

    return (qtde <= 1) ? 0 : 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    while (1) {
        cin >> n;
        cin.ignore();

        if (!n) break;

        map<string, string> assinaturas;
        string chave, valor;
        for (int i = 0; i < n; i++) {
            cin >> chave >> valor;
            assinaturas.insert(make_pair(chave, valor));
        }

        cin >> m;
        cin.ignore();

        int resposta = 0;
        for (int i = 0; i < m; i++) {
            cin >> chave >> valor;
            if (qtde_diferencas(assinaturas[chave], valor))
                resposta++;
        }

        cout << resposta << '\n';
    }
    
    return 0;
}