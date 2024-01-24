#include <bits/stdc++.h>

using namespace std;

string to_lower(string world) {
    string world_lower;
    
    for (int i = 0; i < world.size(); i++) {
        if (world[i] >= 65 && world[i] <= 90) {
            world_lower.push_back(world[i] + 32);
        } else {
            world_lower.push_back(world[i]);
        }
    }

    return world_lower;
}

void print_list(string *arr, int size) {
    for (int i = 0; i < size; i++) 
        cout << arr[i] << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int qtde_nomes, qtde_linhas;

    cin >> qtde_nomes >> qtde_linhas;

    string fruit, lista_frutas[qtde_nomes], lista[qtde_linhas];

    for (int i = 0; i < qtde_nomes; i++) {
        cin >> fruit;
        lista_frutas[i] = to_lower(fruit);
    }

    for (int i = 0; i < qtde_linhas; i++) {
        cin >> fruit;
        lista[i] = to_lower(fruit);
    }

    print_list(lista_frutas, qtde_nomes);

    return 0;
}