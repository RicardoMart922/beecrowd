#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int quantidade = 0;
    bool situacao = true;
} Pessoa;

int main() {
    string assasino, vitima;
    Pessoa pessoa1, pessoa2;
    set<Pessoa> vetor;

    while (cin >> assasino >> vitima) {
        pessoa1.nome = assasino;
        pessoa1.quantidade += 1;

        pessoa2.nome = vitima;
        pessoa2.situacao = false;

        vetor.insert(pessoa1);
        vetor.insert(pessoa2);
    }

    return 0;
}