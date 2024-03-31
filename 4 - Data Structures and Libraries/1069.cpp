#include <iostream>
using namespace std;

int main() {
    int numero_teste, tamanho, count, aux;
    string expressao;

    cin >> numero_teste;

    for (int i = 0; i < numero_teste; ++i) {
        cin >> expressao;

        tamanho = expressao.length();
        
        count = 0;
        aux = 0;

        for (int j = 0; j < tamanho; ++j) {
            if(expressao[j] == '<')
                aux++;
            if (expressao[j] == '>' && aux > 0) {
                count++;
                aux--;
            }
        }

        cout << count << endl;
    }

    return 0;
} 