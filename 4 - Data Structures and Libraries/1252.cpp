#include <bits/stdc++.h>

using namespace std;

typedef struct {
    long valor;
    bool par;
    long resto;
} Numero;

void merge(Numero *vetor, int inicio, int meio, int fim);
void merge_sort(Numero *vetor, int inicio, int fim);
void imprimir_vetor(Numero *vetor, int tamanho);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    long qtde_numeros, modulo;

    while (1) {
        cin >> qtde_numeros >> modulo;

        cout << qtde_numeros << ' ' << modulo << '\n';

        if (!qtde_numeros && !modulo) break;

        Numero vetor_numeros[qtde_numeros];

        for (int i = 0; i < qtde_numeros; i++) {
            cin >> vetor_numeros[i].valor;

            if (vetor_numeros[i].valor % 2 == 0)
                vetor_numeros[i].par = true;
            else
                vetor_numeros[i].par = false;

            vetor_numeros[i].resto = vetor_numeros[i].valor % modulo;
        }

        merge_sort(vetor_numeros, 0, qtde_numeros - 1);

        imprimir_vetor(vetor_numeros, qtde_numeros);
    }

    return 0;
}

void merge(Numero *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Numero vetor_esquerdo[tamanho_esquerdo];
    Numero vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++) 
        vetor_direito[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    
    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i].resto < vetor_direito[j].resto) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else if (vetor_esquerdo[i].resto == vetor_direito[j].resto) {
            if (!vetor_esquerdo[i].par && !vetor_direito[j].par) {
                if (vetor_esquerdo[i].valor >= vetor_direito[j].valor) {
                    vetor[k] = vetor_esquerdo[i];
                    i++;
                } else {
                    vetor[k] = vetor_direito[j];
                    j++;
                }
            } else if (vetor_esquerdo[i].par && vetor_direito[j].par) {
                if (vetor_esquerdo[i].valor <= vetor_direito[j].valor) {
                    vetor[k] = vetor_esquerdo[i];
                    i++;
                } else {
                    vetor[k] = vetor_direito[j];
                    j++;
                }
            } else {
                if (!vetor_esquerdo[i].par) {
                    vetor[k] = vetor_esquerdo[i];
                    i++;
                } else {
                    vetor[k] = vetor_direito[j];
                    j++;
                }
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

void merge_sort(Numero *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

void imprimir_vetor(Numero *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        cout << vetor[i].valor << '\n';
}