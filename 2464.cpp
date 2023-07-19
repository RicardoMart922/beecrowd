#include <bits/stdc++.h>

using namespace std;

int main() {
    char alfabeto_criptografado[26];
    string frase;

    for (int i = 0; i < 26; i++)
        cin >> alfabeto_criptografado[i];

    cin >> frase;

    for (int i = 0; i < frase.size(); i++) {
        cout << alfabeto_criptografado[frase[i] % 97];
    }

    cout << '\n';
    
    return 0;
}