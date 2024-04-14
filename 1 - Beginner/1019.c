#include <stdio.h>

int main() {
    long int duracao_evento;

    scanf("%ld", &duracao_evento);
    
    long int horas = duracao_evento / 3600;
    duracao_evento = duracao_evento - (horas * 3600);

    long int minutos = duracao_evento / 60;
    duracao_evento = duracao_evento - (minutos * 60);

    long int segundos = duracao_evento;

    printf("%ld:%ld:%ld\n", horas, minutos, segundos);

    return 0;
}