#include <bits/stdc++.h>

using namespace std;

void merge(int *vetor, int inicio, int meio, int final);
void mergeSort(int *vetor, int inicio, int final);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numero_teste, valor, qtde_pares = 0, qtde_impares = 0;
    int i = 0, j = 0; 
    
    cin >> numero_teste;

    int vetor_pares[numero_teste], vetor_impares[numero_teste];

    while (numero_teste--) {
        cin >> valor;

        if (valor % 2 == 0) {
            qtde_pares++;
            vetor_pares[i++] = valor;
        }
        else {
            qtde_impares++;
            vetor_impares[j++] = valor;
        }
    }

    mergeSort(vetor_pares, 0, qtde_pares - 1);
    mergeSort(vetor_impares, 0, qtde_impares - 1);

    for (i = 0; i < qtde_pares; i++)
        cout << vetor_pares[i] << '\n';

    for (i = qtde_impares - 1; i > -1 ; i--)
        cout << vetor_impares[i] << '\n';

    qtde_pares = 0;
    qtde_impares = 0;

    i = 0;
    j = 0;

    return 0;
}

void mergeSort(int *vetor, int inicio, int final) {
    int meio;
    if (inicio < final) {
        meio = (inicio + final) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, final);
        merge(vetor, inicio, meio, final);
    }
}

void merge(int *vetor, int inicio, int meio, int final) {
    int *vetAux, p1, p2, tamanho, i ,j, k;
	int fim1 = 0, fim2 = 0;

	tamanho = final - inicio + 1;
	p1 = inicio;
	p2 = meio + 1;

	vetAux = (int *) malloc(tamanho * sizeof(int));

	if (vetAux != NULL) {

		for (i = 0; i < tamanho; i++) {
			if (!fim1 && !fim2) {
				if (vetor[p1] < vetor[p2])
					vetAux[i] = vetor[p1++];
				else
					vetAux[i] = vetor[p2++];

				if (p1 > meio)
					fim1 = 1;
				if (p2 > final)
					fim2 = 1;
			}
			else {
				if (!fim1)
					vetAux[i] = vetor[p1++];
				else
					vetAux[i] = vetor[p2++];
			}
		}

		for (j = 0, k = inicio; j < tamanho; j++, k++)
			vetor[k] = vetAux[j];
	}

	free(vetAux);
}