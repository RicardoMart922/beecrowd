#include <iostream>

using namespace std;

int vetor[235] = {0};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int qtde_teste, qtde_pessoas, altura;

    cin >> qtde_teste;

    while (qtde_teste--) {
        cin >> qtde_pessoas;

        for (int i = 0; i < qtde_pessoas; i++) {
            cin >> altura;

            vetor[altura]++;
        }

        int flag = 1;
        for (int i = 20; i < 231; i++) {

            if (flag) {
                while (vetor[i]) {
                    if (flag) 
                        cout << i;
                    else 
                        cout << ' ' << i;

                    flag = 0;
                    vetor[i]--;
                }
            }
            else 
                while (vetor[i]) {
                    cout << ' ' << i; 
                    vetor[i]--;
                } 

            vetor[i] = 0;
        }

        cout << '\n';
    }

    return 0;
}