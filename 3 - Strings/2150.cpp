#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string vogais_alienigenas, texto;

    while (cin >> vogais_alienigenas) {
        cin.ignore();

        getline(cin, texto);

        int resposta = 0;
        for (int i = 0; i < vogais_alienigenas.length(); i++) {
            for (int j = 0; j < texto.length(); j++) {
                if (vogais_alienigenas[i] == texto[j])
                    resposta++;
            }
        } 

        cout << resposta << '\n';
    }

    return 0;
}