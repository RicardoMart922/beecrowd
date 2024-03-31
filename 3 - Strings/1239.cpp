#include <bits/stdc++.h>

using namespace std;

int main() {
    string texto;
    int qtde_sublinhado = 0, qtde_asterisco = 0;

    while (getline(cin, texto)) {
        int tamanho = texto.size();

        for (int i = 0; i < tamanho; i++) {
            if (texto[i] == '_' && qtde_sublinhado == 0) {
                qtde_sublinhado++;
                cout << "<i>";
            }
            else if (texto[i] == '_' && qtde_sublinhado == 1) {
                qtde_sublinhado--;
                cout << "</i>";
            }
            else if (texto[i] == '*' && qtde_asterisco == 0) {
                qtde_asterisco++;
                cout << "<b>";
            }
            else if (texto[i] == '*' && qtde_asterisco == 1) {
                qtde_asterisco--;
                cout << "</b>";
            }
            else {
                cout << texto[i];
            }
        }
        cout << '\n';
    }

    return 0;
}