#include <stdio.h>

int main() {
    int idade_em_dias;

    scanf("%d", &idade_em_dias);

    int anos = idade_em_dias / 365;
    idade_em_dias = idade_em_dias - (anos * 365);

    int meses = idade_em_dias / 30;
    idade_em_dias = idade_em_dias - (meses * 30);

    int dias = idade_em_dias;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}