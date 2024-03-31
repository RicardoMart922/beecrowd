#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int id;
    int volume;
} Presente;

int comparacao(const void *a, const void *b);
void merge(int *vetor, int inicio, int meio, int fim);
void merge_sort(int *vetor, int inicio, int fim);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int casos_teste;

    scanf("%d", &casos_teste);

    while (casos_teste--) {
        int qtde_presentes, presentes_bruno;
        int altura, largura, comprimento;

        scanf("%d%d", &qtde_presentes, &presentes_bruno);

        Presente vetor[qtde_presentes];

        for (int i = 0; i < qtde_presentes; i++) {
            scanf("%d%d%d%d", &vetor[i].id, &altura, &largura, &comprimento);

            vetor[i].volume = altura * largura * comprimento;
        }

        qsort(vetor, qtde_presentes, sizeof(Presente), comparacao);

        int vetor_ids[qtde_presentes];
        for (int i = 0; i < qtde_presentes; i++)
            vetor_ids[i] = 0;

        for (int i = 0; i < presentes_bruno; i++)
            vetor_ids[i] = vetor[i].id;

        merge_sort(vetor_ids, 0, presentes_bruno - 1);

        for (int i = 0; i < presentes_bruno; i++) {
            if (i != 0 && i != presentes_bruno) 
                printf(" ");

            printf("%d", vetor_ids[i]);
        }
        printf("\n");
    }

    return 0;
}

int comparacao(const void *a, const void *b) {
    const Presente *p1 = (const Presente*) a;
    const Presente *p2 = (const Presente*) b;

    if (p1->volume == p2->volume) {
        if (p1->id > p2->id)
            return 1;
        else
            return -1;
    } else if (p1->volume > p2->volume) {
        return -1;
    } else { 
        return 1;
    }
}

void merge(int *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    int vetor_esquerdo[tamanho_esquerdo];
    int vetor_direito[tamanho_direito];

    int i, j, k;

    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++) 
        vetor_direito[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    
    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (vetor_esquerdo[i] <= vetor_direito[j]) {
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

void merge_sort(int *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}