#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string entrada;
    list<string> fila, fila_oeste, fila_sul, fila_norte, fila_leste;

    while (1) {
        cin >> entrada;
    
        if (entrada == "0") break;

        fila.push_back(entrada);
    }

    string id, elemento;
    while (1) {

        if (!fila.size())
            break;

        id = fila.front();

        fila.pop_front();

        if (id == "-1") {
            while (1) {
                elemento = fila.front();
                fila.pop_front();

                fila_oeste.push_back(elemento);

                if (!fila.size())
                    break;
                
                if (fila.front() == "-1" || fila.front() == "-2" || fila.front() == "-3" || fila.front() == "-4") {
                    //cout << fila.front() << '\n';
                    break;
                }
                
            }
        } else if (id == "-2") {
            while (1) {
                elemento = fila.front();
                fila.pop_front();

                fila_sul.push_back(elemento);

                if (!fila.size())
                    break;
                
                if (fila.front() == "-1" || fila.front() == "-2" || fila.front() == "-3" || fila.front() == "-4") {
                    //cout << fila.front() << '\n';
                    break;
                }
            }
        } else if (id == "-3") {
            while (1) {
                elemento = fila.front();
                fila.pop_front();

                fila_norte.push_back(elemento);

                if (!fila.size())
                    break;
                
                if (fila.front() == "-1" || fila.front() == "-2" || fila.front() == "-3" || fila.front() == "-4") {
                    //cout << fila.front() << '\n';
                    break;
                }
            }
        } else if (id == "-4") {
            while (1) {
                elemento = fila.front();
                fila.pop_front();

                fila_leste.push_back(elemento);

                if (!fila.size())
                    break;
                
                if (fila.front() == "-1" || fila.front() == "-2" || fila.front() == "-3" || fila.front() == "-4") {
                    //cout << fila.front() << '\n';
                    break;
                }
            }
        }
    }

    while (fila_oeste.size() || fila_sul.size() || fila_norte.size() || fila_leste.size()) {
        if (fila_oeste.size()) {
            fila.push_back(fila_oeste.front());
            fila_oeste.pop_front();
        }

        if (fila_norte.size()) {
            fila.push_back(fila_norte.front());
            fila_norte.pop_front();
        }

        if (fila_sul.size()) {
            fila.push_back(fila_sul.front());
            fila_sul.pop_front();
        }

        if (fila_leste.size()) {
            fila.push_back(fila_leste.front());
            fila_leste.pop_front();
        }
    }

    int tamanho_fila = fila.size();
    for (int i = 1; i <= tamanho_fila; i++) {
        if (i == tamanho_fila) 
            cout << fila.front() << '\n';
        else
            cout << fila.front() << ' ';
        
        fila.pop_front();
    }

    return 0;
}