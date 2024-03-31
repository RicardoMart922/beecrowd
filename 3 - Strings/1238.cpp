#include <bits/stdc++.h>

using namespace std;

int main() {
    int numero_teste;
    string primeira_str, segunda_str;

    cin >> numero_teste;

    while (numero_teste--) {
        cin >> primeira_str >> segunda_str;

        int tamanho1 = primeira_str.size();
        int tamanho2 = segunda_str.size();

        if (tamanho1 >= tamanho2) {
            int i = 0;
            for (i; i < tamanho2; i++)
                cout << primeira_str[i] << segunda_str[i];
                
            for (; i < tamanho1; i++)
                cout << primeira_str[i];

            cout << '\n';
        }
        else {
            int i = 0;
            for (i; i < tamanho1; i++)
                cout << primeira_str[i] << segunda_str[i];   
            
            for (; i < tamanho2; i++)
                cout << segunda_str[i];

            cout << '\n';
        }
    }

    return 0;
}