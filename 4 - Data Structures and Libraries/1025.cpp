#include <bits/stdc++.h>

using namespace std;

void merge(int *vetor, int inicio, int meio, int fim);
void merge_sort(int *vetor, int inicio, int fim);
int busca(int *vetor, int tamanho, int alvo);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int numero_marmores, qtde_consultas, valor, casos = 1;

    while (1) {
        cin >> numero_marmores >> qtde_consultas;

        if (!numero_marmores && !qtde_consultas) break;

        cout << "CASE# " << casos++ << ":\n";
        
        int vetor_marmores[numero_marmores];

        for (int i = 0; i < numero_marmores; i++)
            cin >> vetor_marmores[i];

        merge_sort(vetor_marmores, 0, numero_marmores - 1);

        for (int i = 0; i < qtde_consultas; i++) {
            cin >> valor;

            int posicao = busca(vetor_marmores, numero_marmores, valor);

            if (posicao >= 0) {
                cout << valor << " found at " << posicao << '\n';
            } else {
                cout << valor << " not found\n";
            }
        }
    }

    return 0;
}

void merge(int *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    int vetor_esquerdo[tamanho_esquerdo];
    int vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[meio + 1 + j];

    i = j = 0;
    k = inicio;

    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i] <= vetor_direito[j]) {
            vetor[k] = vetor_esquerdo[i++];
        } else {
            vetor[k] = vetor_direito[j++];
        }
        k++;
    }

    while (i < tamanho_esquerdo) {
        vetor[k++] = vetor_esquerdo[i++];
    }

    while (j < tamanho_direito) {
        vetor[k++] = vetor_direito[j++];
    }
}

void merge_sort(int *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

int busca(int *vetor, int tamanho, int alvo) {
    for (int i = 0; i < tamanho; i++) {
        if (alvo == vetor[i]) 
            return i + 1;
    }

    return -1;
}