#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int idade;
} Duende;

void merge(Duende *, int, int, int);
void merge_sort(Duende *, int, int);
void imprimir(Duende *, int);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_duendes;

    cin >> qtde_duendes;

    Duende vetor_duendes[qtde_duendes];

    for (int i = 0; i < qtde_duendes; i++) {
        cin >> vetor_duendes[i].nome >> vetor_duendes[i].idade;
    }

    merge_sort(vetor_duendes, 0, qtde_duendes - 1);

    imprimir(vetor_duendes, qtde_duendes);

    return 0;
}

void merge(Duende *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Duende vetor_esquerdo[tamanho_esquerdo];
    Duende vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[meio + 1 + j];

    i = j = 0;
    k = inicio;

    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].idade > vetor_direito[j].idade) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else if (vetor_esquerdo[i].idade == vetor_direito[j].idade) {
            if (vetor_esquerdo[i].nome <= vetor_direito[j].nome) {
                vetor[k] = vetor_esquerdo[i];
                i++;
            } else {
                vetor[k] = vetor_direito[j];
                j++;
            }
        } else {
            vetor[k] = vetor_direito[j];
            j++;
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

void merge_sort(Duende *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

void imprimir(Duende *vetor, int tamanho) {
    int pulo = tamanho / 3;

    for (int i = 1; i <= pulo; i++) {
        cout << "Time " << i << '\n';

        int j = i - 1;
        for (j; j < tamanho; j += pulo) {
            cout << vetor[j].nome << ' ' << vetor[j].idade << '\n';
        }

        cout << '\n';
    }
}