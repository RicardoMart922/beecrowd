#include <stdio.h>

typedef struct {
    int coordenada_x;
    int coordenada_y;
} Ponto;

int modulo(int);
double area_terreno(Ponto *);

int main() {
    Ponto terreno_a[4];
    Ponto terreno_b[4];

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &terreno_a[i].coordenada_x, &terreno_a[i].coordenada_y);
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &terreno_b[i].coordenada_x, &terreno_b[i].coordenada_y);
    }

    if (area_terreno(terreno_a) > area_terreno(terreno_b)) 
        printf("terreno A\n");
    else
        printf("terreno B\n");


    return 0;
}

int modulo(int valor) {
    return (valor < 0) ? valor * (-1) : valor; 
}

double area_terreno(Ponto *terreno) {
    int auxiliar_1 = 0;
    int auxiliar_2 = 0;
    int auxiliar_3 = 0;
    for (int i = 0; i < 4; i++) {
        if (i == 3) {
            auxiliar_1 += (terreno[i].coordenada_y * terreno[0].coordenada_x);
            auxiliar_2 += (terreno[i].coordenada_x * terreno[0].coordenada_y);
        } else { 
            auxiliar_1 += (terreno[i].coordenada_y * terreno[i+1].coordenada_x);
            auxiliar_2 += (terreno[i].coordenada_x * terreno[i+1].coordenada_y);
        }
    }

    auxiliar_3 = modulo(auxiliar_1 - auxiliar_2);

    return (double) auxiliar_3 / 2.0;
}