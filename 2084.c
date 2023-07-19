#include <stdio.h>
#include <stdlib.h>

int compara(const void *, const void *);

int main() {
    int numero_candidatos, qtde_total_votos = 0;

    scanf("%d", &numero_candidatos);

    int vetor[numero_candidatos];

    for (int i = 0; i < numero_candidatos; i++) {
        scanf("%d", &vetor[i]);

        qtde_total_votos += vetor[i];
    }

    qsort(vetor, numero_candidatos, sizeof(int), compara);
    int posicao = numero_candidatos - 1;

    double porcentagem_45 = (45 * qtde_total_votos * 1.00f) / 100.00f;
    double porcentagem_40 = (40 * qtde_total_votos * 1.00f) / 100.00f;
    double porcentagem_10 = (10 * qtde_total_votos * 1.00f) / 100.00f;

    if (vetor[posicao] >= porcentagem_45) {
        printf("1\n");
    } else if (vetor[posicao] < porcentagem_40) {
        printf("2\n");
    } else {
        int flag = 0;

        for (int i = 0; i < posicao; i++) {
            double diferenca = vetor[posicao] - vetor[i];
            if (diferenca >= porcentagem_10)
                continue;
            else {
                flag = 1;
                break;
            }

            if (flag) 
                printf("2\n");
            else
                printf("1\n");
        } 
    }

    return 0;
}

int compara(const void *a, const void *b) {
	if (*(int*)a == *(int*)b)
		return 0;
	else if (*(int*)a > *(int*)b)
		return 1;
	else
		return -1;
}