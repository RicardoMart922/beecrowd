#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int valor;
    int indice;
} Elemento;

void merge(Elemento *vetor, int inicio, int meio, int fim);
void merge_sort(Elemento *vetor, int inicio, int fim);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste;

    cin >> casos_teste;

    while (casos_teste--) {
        int tamanho_fila, count = 0;

        cin >> tamanho_fila;

        Elemento fila[tamanho_fila];

        for (int i = 0; i < tamanho_fila; i++) {
            cin >> fila[i].valor;
            fila[i].indice = i;
        }
        
        merge_sort(fila, 0, tamanho_fila - 1);

        for (int i = 0; i < tamanho_fila; i++) {
            if (fila[i].indice == i) count++;
        }

        cout << count << '\n';
    }

    return 0;
}

void merge(Elemento *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Elemento vetor_esquerdo[tamanho_esquerdo];
    Elemento vetor_direito[tamanho_direito];

    int i, j, k;
    for (i = 0; i < tamanho_esquerdo; i++) 
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[meio + 1 + j];

    i = 0, j = 0, k = inicio;

    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].valor > vetor_direito[j].valor) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else {
            vetor[k] = vetor_direito[j];
            j++;
        }
        k++;
    }

    while (i < tamanho_esquerdo) {
        vetor[k] = vetor_esquerdo[i];
        i++, k++;
    }

    while (j < tamanho_direito) {
        vetor[k] = vetor_direito[j];
        j++;
        k++;
    }
}

void merge_sort(Elemento *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}