#include <bits/stdc++.h>

using namespace std;

void inicialiazar_vetor(int *vetor);
void contador_letra(char *texto, int *vetor);
int qtde_letras(int *vetor);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numero_teste;

    scanf("%d%*c", &numero_teste);

    while (numero_teste--) {
        int vetor_letras[26];
        char texto[1001];
        
        scanf(" %[^\n]", texto);
        
        inicialiazar_vetor(vetor_letras);
        
        contador_letra(texto, vetor_letras);

        int qtde = qtde_letras(vetor_letras);
        if (qtde == 26)
            cout << "frase completa\n";
        else if (qtde >= 13 && qtde < 26)
            cout << "frase quase completa\n";
        else
            cout << "frase mal elaborada\n";

        memset(texto, 0, sizeof(texto));
    }    

    return 0;
}

void inicialiazar_vetor(int *vetor) {
    for (int i = 0; i < 26; i++) {
        vetor[i] = 0;
    }
}

void contador_letra(char *texto, int *vetor) {
    for (int i = 0; i < strlen(texto); i++) {
        if (texto[i] != ' ' && texto[i] != ',') {
            vetor[texto[i] % 97] = 1;
        }
    }
}

int qtde_letras(int *vetor) {
    int qtde = 0;
    
    for (int i = 0; i < 26; i++) {
        if (vetor[i] == 1) qtde++;
    }

    return qtde;
}