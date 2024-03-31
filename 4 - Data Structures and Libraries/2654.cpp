#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int poder;
    int qtde_matou;
    int qtde_morreu;
} Godofor;

void merger(Godofor *, int, int, int);
void merger_sort(Godofor *, int, int);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int caso_teste;

    cin >> caso_teste;
    cin.ignore();

    Godofor vetor[caso_teste];
    
    for (int i = 0; i < caso_teste; i++) {
        cin >> vetor[i].nome;
        cin >> vetor[i].poder >> vetor[i].qtde_matou >> vetor[i].qtde_morreu;
    }

    merger_sort(vetor, 0, caso_teste - 1);

    cout << vetor[0].nome << '\n';

    return 0;
}

void merger(Godofor *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Godofor vetor_esquerdo[tamanho_esquerdo];
    Godofor vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[i + inicio];

    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[j + 1 + meio];

    i = j = 0;
    k = inicio;

    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].poder > vetor_direito[j].poder) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else if (vetor_esquerdo[i].poder == vetor_direito[j].poder) {
            if (vetor_esquerdo[i].qtde_matou > vetor_direito[j].qtde_matou) {
                vetor[k] = vetor_esquerdo[i];
                i++;
            } else if (vetor_esquerdo[i].qtde_matou == vetor_direito[j].qtde_matou) {
                if (vetor_esquerdo[i].qtde_morreu < vetor_direito[j].qtde_morreu) {
                    vetor[k] = vetor_esquerdo[i];
                    i++;
                } else if (vetor_esquerdo[i].qtde_morreu == vetor_direito[j].qtde_morreu) {
                    if (vetor_esquerdo[i].nome[0] <= vetor_direito[j].nome[0]) {
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
        vetor[k] = vetor_esquerdo[i];
        i++, k++;
    }

    while (j < tamanho_direito) {
        vetor[k] = vetor_direito[j];
        j++, k++;
    }
}

void merger_sort(Godofor *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merger_sort(vetor, inicio, meio);
        merger_sort(vetor, meio + 1, fim);

        merger(vetor, inicio, meio, fim);
    }
}