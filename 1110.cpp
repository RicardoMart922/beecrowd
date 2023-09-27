#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_cartas, topo;

    while (1) {
        cin >> qtde_cartas;

        if (!qtde_cartas) break;

        list<int> lista_cartas;
        list<int>::iterator it;
        list<int> cartas_descartadas;

        for (int carta = qtde_cartas; carta > 0; carta--) {
            lista_cartas.push_front(carta);
        }

        while (lista_cartas.size() >= 2) {
            topo = lista_cartas.front();
            lista_cartas.pop_front();

            cartas_descartadas.push_front(topo);

            if (lista_cartas.size() == 1) break;

            topo = lista_cartas.front();
            lista_cartas.pop_front();

            lista_cartas.push_back(topo);
            
        }

        int tamanho = cartas_descartadas.size();

        if (!tamanho) cout << "Discarded cards:\n";
        else {
            int vetor[tamanho];

            it = cartas_descartadas.begin();
            for (int i = 0; i < tamanho; i++, it++)
                vetor[i] = *it;

            cout << "Discarded cards: ";
            for (int i = tamanho - 1; i >= 0; i--) {
                if (i == 0)
                    cout << vetor[i] << '\n';
                else 
                    cout << vetor[i] << ", ";
            }
        }

        it = lista_cartas.begin();
        cout << "Remaining card: " << *it << '\n';
    }

    return 0;
}