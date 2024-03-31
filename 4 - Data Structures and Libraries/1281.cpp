#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    double preco;
} Frutas;

void merge(Frutas *vetor, int inicio, int meio, int fim);
void merge_sort(Frutas *vetor, int inicio, int fim);
int busca(Frutas *vetor, int tamanho, string alvo);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste, qtde_frutas, qtde_produtos;
    double total_pagar = 0.00;

    cin >> casos_teste;

    while (casos_teste--) {
        cin >> qtde_frutas;

        Frutas vetor[qtde_frutas];

        for (int i = 0; i < qtde_frutas; i++) {
            cin >> vetor[i].nome >> vetor[i].preco;
        }

        merge_sort(vetor, 0, qtde_frutas - 1);

        cin >> qtde_produtos;

        Frutas vetor_frutas[qtde_produtos];
        
        string nome;
        int qtde;
        for (int i = 0; i < qtde_produtos; i++) {
            cin >> nome >> qtde;

            int posicao = busca(vetor, qtde_frutas, nome);

            total_pagar += qtde * vetor[posicao].preco;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << total_pagar << '\n';

        total_pagar = 0.00;
    }

    return 0;
}

void merge(Frutas *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Frutas vetor_esquerdo[tamanho_esquerdo];
    Frutas vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++) 
        vetor_direito[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    
    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].nome <= vetor_direito[j].nome) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else {
            vetor[k] = vetor_direito[j];
            j++;
        }
        k++;
    }

    while (i < tamanho_esquerdo) {    // Coloca os elementos restantes no vetor esquerdo
        vetor[k] = vetor_esquerdo[i];
        i++, k++;
    }

    while (j < tamanho_direito) {     // Coloca os elementos restantes no vetor direito
        vetor[k] = vetor_direito[j];
        j++, k++;
    }
}

void merge_sort(Frutas *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

int busca(Frutas *vetor, int tamanho, string alvo) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (vetor[meio].nome == alvo) 
            return meio;

        if (alvo < vetor[meio].nome) {
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return -1;
}