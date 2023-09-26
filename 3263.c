#include <stdio.h>
#include <string.h>

char *troca(char *str, int tamanho);
int verificar(char *str1, char *str2, int tamanho);

int main()
{

    int n;
    char entrada_str1[1010] = {0};
    char entrada_str2[1010] = {0};

    scanf("%d", &n);
    scanf("%s", entrada_str1);
    scanf("%s", entrada_str2);

    int tamanho = strlen(entrada_str1);

    if ((n % 2 == 1 && verificar(entrada_str1, troca(entrada_str2, tamanho), tamanho)) || (n % 2 == 0 && verificar(entrada_str1, entrada_str2, tamanho)))
        printf("Deletion succeeded\n");
    else
        printf("Deletion failed\n");

    return 0;
}

int verificar(char *str1, char *str2, int tamanho) {
    for (int i = 0; i < tamanho; ++i)
        if (str1[i] != str2[i])
            return 0;

    return 1;
}

char *troca(char *str, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        if (str[i] == '0')
            str[i] = '1';
        else
            str[i] = '0';
    }

    return str;
}