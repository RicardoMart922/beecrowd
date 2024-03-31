#include <bits/stdc++.h>

using namespace std;

#define TAM 51

string vetor[TAM];

int qtde_palavras(string);
void preparar_vetor(string *, string);
void merge(string *, int, int, int);
void merge_sort(string *, int, int);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde_frases;
    string frase;

    cin >> qtde_frases;
    cin.ignore();

    for (int i = 0; i < qtde_frases; i++) {
        getline(cin, frase);

        int tamanho = qtde_palavras(frase);
        string vetor[tamanho];

        preparar_vetor(vetor, frase);

        merge_sort(vetor, 0, tamanho - 1);

        for (int j = 0; j < tamanho; j++) {
            if (j + 1 == tamanho) {
                cout << vetor[j] << '\n';
            } else {
                cout << vetor[j] << ' ';
            }
        }
    }

    return 0;
}

int qtde_palavras(string frase) {
    int qtde_espacos = 0;

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == ' ')
            qtde_espacos++;
    }

    return qtde_espacos + 1;
}

void preparar_vetor(string *vetor, string str) {
    string auxiliar;

    int j = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i+1] == ' ' || str[i+1] == '\0') {
            auxiliar.push_back(str[i]);
            vetor[j] = auxiliar;
            auxiliar.erase();
            i++;
            j++;
        } else {
            auxiliar.push_back(str[i]);
        }
    }
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
        if (vetor_esquerdo[i].size() >= vetor_direito[j].size()) {
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
        i++;
        k++;
    }

    while (j < tamanho_direito) {     // Coloca os elementos restantes no vetor direito
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