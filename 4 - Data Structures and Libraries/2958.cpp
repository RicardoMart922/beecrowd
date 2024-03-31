#include <bits/stdc++.h>

using namespace std;

void merge(string *vetor, int inicio, int meio, int fim);
void merge_sort(string *vetor, int inicio, int fim);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int linha, coluna;
    int qtde_v = 0, qtde_d = 0;

    cin >> linha >> coluna;

    string matriz[linha][coluna];
    string entrada;

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> entrada;

            if (entrada[1] == 'V')
                qtde_v++;
            else
                qtde_d++;

            matriz[i][j] = entrada;
        }
    }

    string vetor_v[qtde_v];
    string vetor_d[qtde_d];

    int m = 0, n = 0;
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            string entrada = matriz[i][j];

            if (entrada[1] == 'V')
                vetor_v[m++] = entrada;
            else
                vetor_d[n++] = entrada;
            
        }
    }

    merge_sort(vetor_v, 0, qtde_v - 1);
    merge_sort(vetor_d, 0, qtde_d - 1);

    for (int i = 0; i < qtde_v; i++) 
        cout << vetor_v[i] << '\n';

    for (int i = 0; i < qtde_d; i++) 
        cout << vetor_d[i] << '\n';

    return 0;
}

void merge(string *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    string vetor_esquerdo[tamanho_esquerdo];
    string vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];
    
    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;
    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if ((vetor_esquerdo[i][0] - '0') >= (vetor_direito[j][0] - '0')) {
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
        i++;
        k++;
    }

    while (j < tamanho_direito) {
        vetor[k] = vetor_direito[j];
        j++;
        k++;
    }
}

void merge_sort(string *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}