#include <stdio.h>

int main() {
    int n; 

    char vetor[] = {'N', 'L', 'S', 'O'};

    while (1) {
        scanf("%d", &n);
        
        if (!n) break;

        char comandos[n];

        scanf("%s", comandos);

        int p = 0;

        for (int i = 0; i < n; i++) {
            if (comandos[i] == 'D') {
                if (p == 3) p = 0;
                else p++;
            }

            if (comandos[i] == 'E') {
                if (p == 0) p = 3;
                else p--;
            }
        }

        printf("%c\n", vetor[p]);
    }

    return 0;
}