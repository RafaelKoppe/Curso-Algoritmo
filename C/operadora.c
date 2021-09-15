#include <stdio.h>
#include <stdlib.h>

int main() {

    int minutos;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50.0;

    if (minutos > 100) {
        valor = valor + (minutos - 100) * 2;
    }

    printf("O valor a pagar: R$ %.2lf", valor);

    return 0;
}
