#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numero_museus;
    
    while (1) {
        cin >> numero_museus;

        if (numero_museus < 0) break;

        int valor = 0, total = 0, qtde_idas = 0; 
        for (int i = 0; i < numero_museus; i++) {
            cin >> valor;

            total += valor;

            if (total % 100 == 0)
                qtde_idas++;
        }

        cout << qtde_idas << '\n';
    }
    return 0;
}