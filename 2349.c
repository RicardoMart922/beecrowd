#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c, s;
    scanf("%d %d %d", &n, &c, &s);

    int estacoes[n], comandos[c];
    for (int i = 0; i < n; i++)
        estacoes[i] = i + 1;

    for (int i = 0; i < c; i++) {
        scanf("%d", &comandos[i]);
    }

    int resposta = 0, j = 0;
    if (estacoes[j] == s)
        resposta++;
    for (int i = 0; i < c; i++) {
        //printf("i = %d\n", i);
    
        if (comandos[i] < 0 && j == 0) 
            j = n-1;
        else if (comandos[i] > 0 && j == n-1)
            j = 0;
        else {
            j += comandos[i];
            //printf("j = %d\n", j);
        }

        if (estacoes[j] == s)
            resposta++;
    }

    printf("%d\n", resposta);

    return 0;
}