#include <stdio.h>
#include <math.h>

double volume(int);

int main(void){
    int raio, gas_helio_litro;
    
    scanf("%d %d", &raio, &gas_helio_litro);
    
    double volume_balao = volume(raio);
    
    printf("%.0f\n", floor(gas_helio_litro / volume_balao));
    
    return 0;
}

double volume(int raio) {
    const double pi = 3.1415;
    return (4 * (pi * pow(raio, 3))) / 3;
}