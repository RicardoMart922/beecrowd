#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string numero;
    int i = 0, flag = 1;

    cin >> numero;

    while (numero[i] != '\0') {
        if (numero[i] == '1' && numero[i+1] == '3') {
            cout << numero << " es de Mala Suerte\n";
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        cout << numero << " NO es de Mala Suerte\n";

    return 0;
}