#include <bits/stdc++.h>

using namespace std;

int bubble_sort(int *vetor, int tamanho); 

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_teste, tamanho_trem;

    cin >> qtde_teste;

    while (qtde_teste--) {
        cin >> tamanho_trem;

        int vetor[tamanho_trem];
        int numero_trocas = 0;

        for (int i = 0; i < tamanho_trem; i++)
            cin >> vetor[i];

        numero_trocas = bubble_sort(vetor, tamanho_trem);
    
        cout << "Optimal train swapping takes " << numero_trocas << " swaps.\n";
    }

    return 0;
}

int bubble_sort(int *vetor, int tamanho) {
    int i, j, auxiliar, qtde_trocas = 0;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                qtde_trocas++;
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j + 1] = auxiliar;
            }
        }
    } 

    return qtde_trocas;
}