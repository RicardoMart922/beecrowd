#include <bits/stdc++.h>

using namespace std;

int main() {
    string mensagem;

    getline(cin, mensagem);

    for (int i = 0; i < mensagem.size(); i++) {
        if ((mensagem[i] == 'p' || mensagem[i] == 'P') && (mensagem[i+1] == 'p' || mensagem[i+1] == 'P')) {
            i++;
            cout << mensagem[i];
        } else if ((mensagem[i] == 'p' || mensagem[i] == 'P') ) {
            continue;
        }
        else
            cout << mensagem[i];
    }
    printf("\n");

    return 0;
}