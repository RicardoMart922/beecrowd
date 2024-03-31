#include <bits/stdc++.h>

using namespace std;

int qtde_ciclos(string, int);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    string rastro;
    int numero_processos;

    while (cin >> rastro) {
        cin >> numero_processos;

        cout << qtde_ciclos(rastro, numero_processos) << '\n';
    }

    return 0;
}

int qtde_ciclos(string str, int valor) {
    int numero_ciclos = 0;
    int flag;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'W')
            numero_ciclos++;
        else {
            flag = 1;

            while (str[i+1] != 'W' && flag != valor) { 
                i++;
                flag++;
            }

            numero_ciclos++;
        }
    }

    return numero_ciclos;
}