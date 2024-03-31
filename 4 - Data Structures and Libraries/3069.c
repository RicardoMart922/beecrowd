#include <stdio.h>
#include <stdlib.h>

#define MAXN 10001

typedef struct {
    int inicio;
    int fim;
} Intervalo;

int ordenacao(Intervalo *vetor, int n) {
    Intervalo auxiliar;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && vetor[j].inicio < vetor[j-1].inicio; j--) {
			auxiliar = vetor[j];
			vetor[j] = vetor[j-1];
			vetor[j-1] = auxiliar;
		}
    }
}

int main () {
    int p, s, n = 1;
    Intervalo sorveteiros[MAXN];

    while (1) {
        scanf("%d %d", &p, &s);

        if (p + s == 0) 
            break;
        
        printf("Teste %d\n", n++);

        for (int i = 0; i < s; i++)
            scanf("%d %d", &sorveteiros[i].inicio, &sorveteiros[i].fim);
        
        ordenacao(sorveteiros, s);

        int inicio = sorveteiros[0].inicio;
        int fim = sorveteiros[0].fim;

        int i;
        for (i = 1; i < s; i++) {
            while (i < s && sorveteiros[i].inicio <= fim) {
                if (sorveteiros[i].fim > fim) 
                    fim = sorveteiros[i].fim;

                i++;
            }

            printf("%d %d\n", inicio, fim);
            
            inicio = sorveteiros[i].inicio;
            fim = sorveteiros[i].fim;
        }

        if (i == s) 
            printf("%d %d\n", inicio, fim);
        
        printf("\n");
    }
    
    return 0;
}