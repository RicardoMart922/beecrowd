#include <stdio.h>

int main() {
    char vetor[100000];

    scanf("%s", vetor);

    // zelda
    int a = 0, e = 1, i = 2, o = 3, u = 4;
    int flag = 0;
    while (1) {
        if ((vetor[a] == 'z' || vetor[a] == 'Z') && (vetor[e] == 'e' || vetor[e] == 'E') && 
            (vetor[i] == 'l' || vetor[i] == 'L') && (vetor[o] == 'd' || vetor[o] == 'D') && 
            (vetor[u] == 'a' || vetor[u] == 'A')) {
            flag = 1;
            break;
        }

        if (vetor[u] == '\0')
            break;
        
        a++, e++, i++, o++, u++;
    }

    if (flag)
        printf("Link Bolado\n");
    else
        printf("Link Tranquilo\n");

    return 0;
}