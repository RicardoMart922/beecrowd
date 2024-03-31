#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numero_teste;
    string palavra;

    cin >> numero_teste;

    while (numero_teste--) {
        cin >> palavra;

        int tamanho_palavra = palavra.size();

        if (tamanho_palavra > 3)
            cout << "3\n";
        else {
            if ((palavra[0] == 'o' && palavra[1] == 'n') || (palavra[0] == 'o' && palavra[2] == 'e'))
                cout << "1\n";
            else if ((palavra[1] == 'n' && palavra[0] == 'o') || (palavra[1] == 'n' && palavra[2] == 'e'))
                cout << "1\n";
            else if ((palavra[2] == 'e' && palavra[0] == 'o') || (palavra[2] == 'e' && palavra[1] == 'n'))
                cout << "1\n";
            else 
                cout << "2\n";
        }
    }
    

    return 0;
}