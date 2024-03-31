#include <bits/stdc++.h>

using namespace std;

void imprimir_resposta(string str1, string str2, string str3) {
    int indice1, indice2;
    bool flag = true;
    for (int i = 0; i < str3.size(); i++) {
        if (str3[i] == '_' && flag) {
            indice1 = i;
            flag = false;
        }
        if (str3[i] == '_' && !flag) 
            indice2 = i;
    }

    if ((str1[indice1] == str2[indice2]) || (str1[indice2] == str2[indice1]))
        cout << "Y\n";
    else 
        cout << "N\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_teste;

    cin >> qtde_teste;

    string primeiro_palpite;
    string segundo_palpite;
    string palavra;
    
    while (qtde_teste--) {
        cin >> primeiro_palpite;
        cin >> segundo_palpite;
        cin >> palavra;

        imprimir_resposta(primeiro_palpite, segundo_palpite, palavra);
    }

    return 0;
}