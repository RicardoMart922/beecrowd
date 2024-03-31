#include <bits/stdc++.h>

using namespace std;

long long int converterStringParaInt(string valor_str, int tamanho_str) {
    long long int soma = 0;
    for (int i = 0, j = tamanho_str - 1; i < tamanho_str; i++, j--)
        soma += (valor_str[i] - '0') * pow(10, j);
    
    return soma;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    string entrada;

    while (cin >> entrada) {
        string string_aux1 = "", string_aux2 = "";
        int flag = 0;

        long long int valor1 = 0, valor2 = 0, valor3 = 0, resposta = 0;  

        int tamanho_entrada = entrada.size();      

        if (entrada[0] == 82) {
         // R + numero = numero
            for (int i = 2; i < entrada.size(); i++) {
                if (entrada[i] != '=' && flag == 0)
                    string_aux1.push_back(entrada[i]);
                else
                    flag = 1;

                if (entrada[i] != '=' && flag == 1)
                    string_aux2.push_back(entrada[i]);
            }

            valor2 = converterStringParaInt(string_aux1, string_aux1.size());
            valor3 = converterStringParaInt(string_aux2, string_aux2.size());

            resposta = valor3 - valor2;
        }
        else if (entrada[tamanho_entrada-1] == 74) {
        // numero + numero = J
            for (int i = 0; i < entrada.size() - 2; i++) {
                if (entrada[i] != '+' && flag == 0)
                    string_aux1.push_back(entrada[i]);
                else
                    flag = 1;

                if (entrada[i] != '+' && flag == 1)
                    string_aux2.push_back(entrada[i]);
            }

            valor1 = converterStringParaInt(string_aux1, string_aux1.size());
            valor2 = converterStringParaInt(string_aux2, string_aux2.size());

            resposta = valor1 + valor2;
        }
        else {
        // numero + L = numero
            for (int i = 0; i < entrada.size(); i++) {
                if (entrada[i] != '+' && flag == 0)
                    string_aux1.push_back(entrada[i]);
                else {
                    flag = 1;
                    if (entrada[i] == '+' || entrada[i] == 'L' || entrada[i] == '=')
                        continue;
                    else
                        string_aux2.push_back(entrada[i]); 
                }
            }

            valor1 = converterStringParaInt(string_aux1, string_aux1.size());
            valor3 = converterStringParaInt(string_aux2, string_aux2.size());

            resposta = valor3 - valor1;
        }

        cout << resposta << '\n';
    }

    return 0;
}