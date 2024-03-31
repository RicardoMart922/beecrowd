#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    double valor;
    int preferencia;
} Presente;

void merge(Presente*vetor, int inicio, int meio, int fim);
void merge_sort(Presente *vetor, int inicio, int fim);
void imprimir_vetor(Presente *vetor, int tamanho);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    cout << fixed << setprecision(2);

    string nome;
    int  qtde_elementos;
    while (cin >> nome >> qtde_elementos) {
        cin.ignore();
        cout << "Lista de " << nome << '\n';

        string nome_presente;
        double valor_presente;
        int preferencia_presente;
        Presente vetor_presente[qtde_elementos];

        for (int i = 0; i < qtde_elementos; i++) {
            getline(cin, nome_presente);
            
            cin >> valor_presente >> preferencia_presente;

            vetor_presente[i].nome = nome_presente;
            vetor_presente[i].valor = valor_presente;
            vetor_presente[i].preferencia = preferencia_presente;

            cin.ignore();
        }

        merge_sort(vetor_presente, 0, qtde_elementos - 1);

        imprimir_vetor(vetor_presente, qtde_elementos);
    }

    return 0;
}

void merge(Presente *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Presente vetor_esquerdo[tamanho_esquerdo];
    Presente vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++) 
        vetor_direito[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    
    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].preferencia > vetor_direito[j].preferencia) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else if (vetor_esquerdo[i].preferencia == vetor_direito[j].preferencia) {
            if (vetor_esquerdo[i].valor < vetor_direito[j].valor) {
                vetor[k] = vetor_esquerdo[i];
                i++;
            } else if (vetor_esquerdo[i].valor == vetor_direito[j].valor) {
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

    while (i < tamanho_esquerdo) {    // Coloca os elementos restantes no vetor esquerdo
        vetor[k] = vetor_esquerdo[i];
        i++, k++;
    }

    while (j < tamanho_direito) {     // Coloca os elementos restantes no vetor direito
        vetor[k] = vetor_direito[j];
        j++, k++;
    }
}

void merge_sort(Presente *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

void imprimir_vetor(Presente *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i].nome << " - R$" << vetor[i].valor << '\n';
    }
    cout << '\n';
}