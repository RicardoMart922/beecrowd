#include <bits/stdc++.h>

using namespace std;

#define TRUE 1
#define FALSE 0

#define ALTA 3
#define MEDIA 2
#define BAIXA 1

int operador (char str) {
    if (str == '(' || str == ')' || 
        str == '+' || str == '-' || 
        str == '/' || str == '*' || 
        str == '^')
        return TRUE;
    return FALSE;
}

int prioridade (char operador) {
    if (operador == '^') 
        return ALTA;
    if (operador == '/' || operador == '*') 
        return MEDIA;
    if (operador == '+' || operador == '-') 
        return BAIXA;
    return FALSE;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    string entrada;
    int qtde_teste;

    cin >> qtde_teste;
    cin.ignore();

    stack<char> pilha_operadores;

    while (qtde_teste--) {
        cin >> entrada;

        for (int i = 0; i < entrada.size(); i++) {
            if (operador(entrada[i])) {
                if (pilha_operadores.empty()) {
                    pilha_operadores.push(entrada[i]); 
                } else {
                    if (entrada[i] == ')') {
                        while (1) {
                            if (pilha_operadores.top() == '(') {
                                pilha_operadores.pop();
                                break;
                            }   
                            cout << pilha_operadores.top();
                            pilha_operadores.pop();
                        }
                    } else if (entrada[i] == '(') {
                        pilha_operadores.push(entrada[i]);
                    } else if (prioridade(pilha_operadores.top()) >= prioridade(entrada[i])) {
                        cout << pilha_operadores.top();
                        pilha_operadores.pop();
                        while (1) {
                            if (pilha_operadores.empty() || prioridade(pilha_operadores.top()) < prioridade(entrada[i]) ) 
                                break;
                            
                            cout << pilha_operadores.top();
                            pilha_operadores.pop();
                        }
                        pilha_operadores.push(entrada[i]);
                    } else {
                        pilha_operadores.push(entrada[i]);
                    }
                }
            } else {
                cout << entrada[i];
            }
        }

        int tamanho_pilha = pilha_operadores.size();
        for (int i = 0; i < tamanho_pilha; i++) {
            cout << pilha_operadores.top();
            pilha_operadores.pop();
        }
        cout << '\n';
    }

    return 0;
}