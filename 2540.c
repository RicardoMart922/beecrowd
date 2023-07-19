#include <stdio.h>

int main() {
    int numero_jogadores;
    int qtde_votos_favoraveis;
    int voto;
    
    while (scanf("%d", &numero_jogadores) != EOF) {
        qtde_votos_favoraveis = 0;

        for (int i = 0; i < numero_jogadores; i++) {
            scanf("%d", &voto);

            if (voto)
                qtde_votos_favoraveis++;
        }

        if ((qtde_votos_favoraveis / numero_jogadores) >=  (2/3))
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}