#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int converterStringParaInt(string valor_str) {
    int soma = 0;
    for (int i = 0, j = valor_str.size() - 1; i < valor_str.size(); i++, j--)
        soma += (valor_str[i] - '0') * pow(10, j);
    
    return soma;
}

void derivada(string str) {
    string c, e;
    int i = 0;
    for (i = 0; i < str.size(); i++) {
        if (str[i] == 'x') 
            break;
        c.push_back(str[i]);
    }

    i++;

    for (i; i < str.size(); i++)
        e.push_back(str[i]);

    int n, m;
    n = converterStringParaInt(c);
    m = converterStringParaInt(e);

    cout << n * m << 'x';
    m--;
    if (m != 1)
        cout << m;
}

int main() {
    int t, c, e;
    string polinomio, str;
    

    while (cin >> t) {
        cin.ignore();

        getline(cin, polinomio);

        stringstream s(polinomio);

        while (s >> str) {
            if (str == "+")
                cout << " + ";
            else 
                derivada(str);
        }
        cout << '\n';

    }
    return 0;
}