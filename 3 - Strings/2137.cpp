#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string dado_str;
    long long int dado_lli;
} Elemento;

void merge(Elemento arr[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    Elemento L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];


    i = 0; 
    j = 0; 
    k = inicio; 
    while (i < n1 && j < n2) {
        if (L[i].dado_lli <= R[j].dado_lli) {
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


void mergeSort(Elemento arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);

        merge(arr, inicio, meio, fim);
    }
}

long long int converterStringParaInt(string valor_str, int tamanho_str)
{
    long long int soma = 0;
    for (int i = 0, j = tamanho_str - 1; i < tamanho_str; i++, j--)
        soma += (valor_str[i] - '0') * pow(10, j);
    
    return soma;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    // Dados
    int qtde_elementos;

    // Leitura
    while (cin >> qtde_elementos) {
        Elemento vetor_elementos[qtde_elementos];

        // Leitura
        for (int i = 0; i < qtde_elementos; i++) {
            cin >> vetor_elementos[i].dado_str;
            string aux = vetor_elementos[i].dado_str;
            vetor_elementos[i].dado_lli =  converterStringParaInt(vetor_elementos[i].dado_str, aux.size());
        }

        mergeSort(vetor_elementos, 0, qtde_elementos-1);

        // Saída
        for (int i = 0; i < qtde_elementos; i++) {
            cout << vetor_elementos[i].dado_str << '\n';
        }
    }

    return 0;
}