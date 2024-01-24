#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
} Medalhas;

// Função de comparação para ordenar o vector de acordo com o número de medalhas
bool comparaMedalhas(const pair<string, Medalhas>& a, const pair<string, Medalhas>& b) {
    // Comparar por ouro, prata e bronze
    if (a.second.ouro != b.second.ouro) {
        return a.second.ouro > b.second.ouro;
    } else if (a.second.prata != b.second.prata) {
        return a.second.prata > b.second.prata;
    } else if (a.second.bronze != b.second.bronze) {
        return a.second.bronze > b.second.bronze;
    } else {
        // Se todas as medalhas forem iguais, comparar pela chave (país)
        return a.first < b.first;
    }
}

int main() {
    map<string, Medalhas> quadro;
    string input, pais;

    while (getline(cin, input)) {
        for (int i = 0; i < 3; i++) {
            getline(cin, pais);

            if (i == 0)
                quadro[pais].ouro += 1;
            else if (i == 1)
                quadro[pais].prata += 1;
            else
                quadro[pais].bronze += 1;
        }
    }

    // Criar um vector com os pares chave-valor do map
    vector<pair<string, Medalhas>> vectorQuadro(quadro.begin(), quadro.end());

    // Ordenar o vector usando a função de comparação
    sort(vectorQuadro.begin(), vectorQuadro.end(), comparaMedalhas);

    // Imprimir os resultados ordenados
    cout << "Quadro de Medalhas\n";
    for (const auto& elemento : vectorQuadro) {
        cout << elemento.first << " " << elemento.second.ouro << " " << elemento.second.prata << " " << elemento.second.bronze << '\n';
    }

    return 0;
}