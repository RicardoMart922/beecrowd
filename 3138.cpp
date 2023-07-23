#include <bits/stdc++.h>

using namespace std;

#define TAM 21

typedef unsigned long long ull;

ull vetor_fatorial[TAM];
map<string, int> input;

ull numero_sequencias(int);
void fatorial();

int main() {
    fatorial();

    int qtde_casos, total = 0;
    int qtde = 0;
    string cor;

    cin >> qtde_casos;

    for (int i = 0; i < qtde_casos; i++) {
        cin >> cor >> qtde;

        map<string, int>::iterator it = input.find(cor);
        if (it != input.end()) 
            it->second += qtde;
        else 
            input.insert(make_pair(cor, qtde));
        
        total += qtde;
    }

    cout << "Feliz aniversario Tobias!\n";
    cout << numero_sequencias(total) << '\n';
}

ull numero_sequencias(int indice) {
    ull denominador = 1;

    map<string, int>::iterator it;
    for (it = input.begin(); it != input.end(); it++) {
        int posicao = (int) it->second;
        denominador = denominador * vetor_fatorial[posicao-1];
    }

    return (vetor_fatorial[indice-1] / denominador);
}

void fatorial() {
    vetor_fatorial[0] = 1;
    for (int i = 1; i < 21; i++) {
        vetor_fatorial[i] = vetor_fatorial[i-1] * (i+1);
    }
}