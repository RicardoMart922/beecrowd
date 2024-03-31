#include <bits/stdc++.h>

using namespace std;

int eh_consoante(char a) {
    string letras = "bcdfghjklmnpqrstvxzwyk";

    for (int i = 0; i < letras.size(); i++) {
        if (a == letras[i])
            return 1;
    }

    return 0;
}

int consoantes(string str) {
    int qtde = 0;
    str[0] = tolower(str[0]);

    for (int i = 0; i < str.size(); i++) {
        if (eh_consoante(str[i]) && eh_consoante(str[i+1]) && eh_consoante(str[i+2]))
            return 1;
    }

    str[0] = toupper(str[0]);

    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_sobrenomes;
    string sobrenome;

    cin >> qtde_sobrenomes;

    while (qtde_sobrenomes--) {
        int flag = 0;

        cin >> sobrenome;

        flag = consoantes(sobrenome);

        if (!flag) 
            cout << sobrenome << " eh facil\n";
        else 
            cout << sobrenome << " nao eh facil\n";

    }

    return 0;
}