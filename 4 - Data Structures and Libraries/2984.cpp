#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    stack<char> pilha;
    string entrada;

    cin >> entrada;

    for (int i = 0; i < entrada.size(); i++) {
        if (entrada[i] == '(')
            pilha.push('(');
        else if (entrada[i] == ')' && pilha.size())
            pilha.pop();
    }

    if (!pilha.size())
        cout << "Partiu RU!\n";
    else 
        cout << "Ainda temos " << pilha.size() << " assunto(s) pendente(s)!\n";

    return 0;
}