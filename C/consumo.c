#include <stdio.h>
#include <stdlib.h>

int main() {

    int distancia;
    double gasto, media;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

    media = distancia / gasto;

    printf("Consumo medio = %.3lf", media);
    return 0;
}
