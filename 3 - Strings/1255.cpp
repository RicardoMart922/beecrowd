#include <bits/stdc++.h>

using namespace std;

int vetor[30];
char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                   'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                   's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

bool is_letra(char str) {
    int valor = tolower(str);
    if (valor >= 97 && valor <= 122)
        return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string texto;
    int casos_teste;
    int maior = 0;

    cin >> casos_teste;
    cin.ignore();

    while (casos_teste--) {
        getline(cin, texto);

        maior = 0;
        for (int i = 0; i < texto.size(); i++) {
            if (is_letra(texto[i])) {
                int letra = tolower(texto[i]);
                int posicao = letra % 97; 
                vetor[posicao] += 1;

                if (maior < vetor[posicao]) maior = vetor[posicao];
            }
        }

        for (int i = 0; i < 26; i++) {
            if (vetor[i] == maior)
                cout << alfabeto[i];
        }
        cout << '\n';

        memset(vetor, 0, sizeof(vetor));    
    }

    return 0;
}