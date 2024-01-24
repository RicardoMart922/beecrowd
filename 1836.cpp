#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

typedef struct {
    string nome;
    int nivel;
    int HP;
    int AT;
    int DF;
    int SP;
} Pokemon;

int valor_HP(int L, int B, int IV, int EV) {
    double valor = 0.00;

    valor = (((IV + B + (sqrt(EV) / 8) + 50) * L) / 50) + 10;

    return valor;
}

int valor_atributo(int L, int B, int IV, int EV) {
    double valor = 0.00;

    valor = (((IV + B + (sqrt(EV) / 8)) * L) / 50) + 5;

    return valor;
}

int main() {
    int t, c = 1;
    
    scanf("%d", &t);

    while (t--) {
        Pokemon pokemon;
        int B, IV, EV;

        cin >> pokemon.nome >> pokemon.nivel;

        printf("Caso #%d: %s nivel %d\n", c++, pokemon.nome.c_str(), pokemon.nivel);

        scanf("%d %d %d", &B, &IV, &EV);
        pokemon.HP = valor_HP(pokemon.nivel, B, IV, EV);

        scanf("%d %d %d", &B, &IV, &EV);
        pokemon.AT = valor_atributo(pokemon.nivel, B, IV, EV);

        scanf("%d %d %d", &B, &IV, &EV);
        pokemon.DF = valor_atributo(pokemon.nivel, B, IV, EV);

        scanf("%d %d %d", &B, &IV, &EV);
        pokemon.SP = valor_atributo(pokemon.nivel, B, IV, EV);

        printf("HP: %d\n", pokemon.HP);
        printf("AT: %d\n", pokemon.AT);
        printf("DF: %d\n", pokemon.DF);
        printf("SP: %d\n", pokemon.SP);

    }
    
    return 0;
}
