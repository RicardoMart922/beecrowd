#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    string cor;
    char tamanho;
} Objeto;

void merge(Objeto *, int, int, int);
void merge_sort(Objeto *, int, int);
void imprimir_vetor(Objeto *, int);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_casos;
    int flag = 0;

    while (1) {
        cin >> qtde_casos;

        if (!qtde_casos)
            break;
        
        if (flag)
            cout << '\n';
    
        Objeto vetor[qtde_casos];

        for (int i = 0; i < qtde_casos; i++) {
            cin.ignore();

            getline(cin, vetor[i].nome);
            cin >> vetor[i].cor >> vetor[i].tamanho;
        }

        merge_sort(vetor, 0, qtde_casos - 1);

        imprimir_vetor(vetor, qtde_casos);
        flag = 1;
    }

    return 0;
}

void merge(Objeto *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Objeto vetor_esquerdo[tamanho_esquerdo];
    Objeto vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[meio + 1 + j];

    i = j = 0;
    k = inicio;

    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].cor[0] < vetor_direito[j].cor[0]) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else if (vetor_esquerdo[i].cor[0] == vetor_direito[j].cor[0]) {
            if (vetor_esquerdo[i].tamanho > vetor_direito[j].tamanho) {
                vetor[k] = vetor_esquerdo[i];
                i++;
            } else if (vetor_esquerdo[i].tamanho == vetor_direito[j].tamanho) {
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

void merge_sort(Objeto *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

void imprimir_vetor(Objeto *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i].cor << ' ' << vetor[i].tamanho << ' ' << vetor[i].nome << '\n';
    }
}