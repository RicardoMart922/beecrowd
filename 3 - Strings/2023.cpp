#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome_principal;
    string nome_auxiliar;
} Nomes;

char minuscula(char str) {
    for (char i = 'A', j = 'a'; i <= 'Z'; i++, j++) {
        if (str == i || str == j)
            return j;
    }
    return 0;
}

void merge(Nomes arr[], int inicio, int meio, int fim);
void mergeSort(Nomes arr[], int inicio, int fim);

void imprimir_vetor(Nomes vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i].nome_principal << ' ' << vetor[i].nome_auxiliar << '\n';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int qtde = 1000;
    string nome_1;
    Nomes vetor_nomes[qtde];

    int i = 0;
    while (getline(cin, nome_1)) {
        vetor_nomes[i].nome_principal = nome_1;
        int j = 0;
        string nome_2;
        while (1) {
            if (nome_1[j] == '\0') break;
        
            nome_2.push_back(minuscula(nome_1[j]));
            j++;
        }

        nome_2[j] = '\0';

        vetor_nomes[i].nome_auxiliar = nome_2;
        i++;
    }

    mergeSort(vetor_nomes, 0, i - 1);

    cout << vetor_nomes[i - 1].nome_principal << '\n';

    return 0;
}

void merge(Nomes arr[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    Nomes L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];


    i = 0; 
    j = 0; 
    k = inicio; 
    while (i < n1 && j < n2) {
        if (L[i].nome_auxiliar <= R[j].nome_auxiliar) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(Nomes arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);

        merge(arr, inicio, meio, fim);
    }
}