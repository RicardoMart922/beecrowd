#include <bits/stdc++.h>

using namespace std;

set<string> vetor;

void separador(string str) {
    stringstream auxiliar(str);
    string palavra;

    while (auxiliar >> palavra) {
        vetor.insert(palavra);
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr); 
    cout.tie(nullptr);

    int numero_teste;
    string str;

    cin >> numero_teste;
    cin.ignore();

    while (numero_teste--) {
        getline(cin, str);

        separador(str);

        int flag = 1;
        for (auto &item: vetor) {
            if (flag) {
                cout << item;
                flag = 0;
            } else {
                cout << ' ' << item;
            }
        }

        cout << '\n';

        vetor.clear();
    }

    return 0;
}