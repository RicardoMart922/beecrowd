#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string nome;
    string data_a, data_b;

    int dia_a, mes_a, ano_a;
    int dia_b, mes_b, ano_b;

    getline(cin, nome);
    cin >> data_a;
    cin >> data_b;
    
    dia_a = (10 * (data_a[0] - '0')) + (data_a[1] - '0');
    mes_a = (10 * (data_a[3] - '0')) + (data_a[4] - '0');
    ano_a = (1000 * (data_a[6] - '0')) + (100 * (data_a[7] - '0')) + (10 * (data_a[8] - '0')) + (data_a[9] - '0');

    dia_b = (10 * (data_b[0] - '0')) + (data_b[1] - '0');
    mes_b = (10 * (data_b[3] - '0')) + (data_b[4] - '0');
    ano_b = (1000 * (data_b[6] - '0')) + (100 * (data_b[7] - '0')) + (10 * (data_b[8] - '0')) + (data_b[9] - '0');

    if (dia_a == dia_b && mes_a == mes_b) cout << "Feliz aniversario!\n";

    int anos_idade = ano_a - ano_b;

    if (mes_a == mes_b) {
        if (dia_a >= dia_b) {
            cout << "Voce tem " << anos_idade << " anos " << nome << ".\n";
        } else {
            cout << "Voce tem " << anos_idade-1 << " anos " << nome << ".\n";
        }
    } else if (mes_a < mes_b) {
        cout << "Voce tem " << anos_idade-1 << " anos " << nome << ".\n";
    } else {
        cout << "Voce tem " << anos_idade << " anos " << nome << ".\n";
    }

    return 0;
}