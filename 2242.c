#include <stdio.h>
#include <string.h>

int vogal(char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        return 1;
    return 0;
}

int palindromo(char *str) {
    int size = strlen(str);

    for (int i = 0, j = size - 1; i < size; i++, j--) {
        if (str[i] != str[j]) return 0;
    }

    return 1;
}

void eliminar_consoantes(char *str) {
    char aux[55];

    int i = 0, j = 0;
    for (i = 0, j = 0; i < strlen(str); i++) {
        if (vogal(str[i])) {
            aux[j] = str[i];
            j++;
        }
    }

    aux[j] = '\0';

    if (palindromo(aux)) 
        printf("S\n");
    else 
        printf("N\n");
}

int main() {
    char vetor[55];

    scanf("%s", vetor);

    eliminar_consoantes(vetor);

    return 0;
}