#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr), cout.tie(nullptr);

    int numero_teste;
    string str_a, str_b;

    cin >> numero_teste;

    while (numero_teste--) {
        cin >> str_a >> str_b;

        int tamanho_a = str_a.size();
        int tamanho_b = str_b.size();

        if (tamanho_a == tamanho_b)
            if (str_a == str_b)
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        else if (tamanho_a > tamanho_b) {
            int i = (tamanho_a - tamanho_b);
            int flag = 0;
            for (int j = 0; i < tamanho_a; i++, j++) {
                if (str_a[i] == str_b[j])
                    flag++;
            }
            if (tamanho_b == flag)
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        }
        else    
            cout << "nao encaixa\n";
    }

    return 0;
}