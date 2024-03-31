#include <stdio.h>
#include <math.h>

double distanciaEntreDoisPontos(int, int, int, int);
double area(int);

int main(void){
    
    int raio_cacador, x_cacador, y_cacador;
    int raio_flor, x_flor, y_flor;
    
    while (scanf("%d%d%d%d%d%d", &raio_cacador, &x_cacador, &y_cacador, &raio_flor, &x_flor, &y_flor) != EOF) {
       
        if (raio_cacador >= distanciaEntreDoisPontos(x_cacador, y_cacador, x_flor, y_flor) + raio_flor && (area(raio_cacador)) >= area(raio_flor))
            printf("RICO\n");
        else
            printf("MORTO\n");
    }
    
    return 0;
}

double distanciaEntreDoisPontos(int xa, int ya, int xb, int yb) {
    return sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
}

double area(int raio) {
    return 3.14 * raio * raio;
}