#include <bits/stdc++.h>

using namespace std;

int numero_aliteracao(string);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string frase;

    while (getline(cin, frase)) {
        cout << numero_aliteracao(frase) << '\n';
    }

    return 0;
}

int numero_aliteracao(string frase) {
    stringstream str(frase);
    string palavra;
    char letra;
    int i = 0, ans = 0;

    while (str >> palavra) {
        if (!i) letra = tolower(palavra[0]);
        else if (letra == tolower(palavra[0])) {
            ans++;
            while (str >> palavra) {
                if (letra != tolower(palavra[0])) {
                    letra = tolower(palavra[0]); 
                    break;
                }
            }
        } else letra = tolower(palavra[0]);
        i++;
    } 

    return ans;
}