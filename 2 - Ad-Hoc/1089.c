#include <stdio.h>

int main(){
    int n;

    while(1) {
        scanf("%d", &n);

        if (!n) break;
        
        int qtde = 0;
        int vetor[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &vetor[i]);

        for(int i = 1; i < n-1; i++) {
            if (vetor[i] < vetor[i-1] && vetor[i] < vetor[i+1])
                qtde++;
            else if (vetor[i] > vetor[i-1] && vetor[i] > vetor[i+1])
                qtde++;
        }

        if (vetor[n-1] > vetor[n-2] && vetor[n-1] > vetor[0])
            qtde++;
        else if (vetor[n-1] < vetor[n-2] && vetor[n-1] < vetor[0])
            qtde++;
        
        if (vetor[0] > vetor[1] && vetor[0] > vetor[n-1])
            qtde++;
        else if (vetor[0] < vetor[1] && vetor[0] < vetor[n-1])
            qtde++;

        printf("%d\n", qtde);
    }


    return 0;
}