#include <stdio.h>
#include <stdlib.h>

int main() {

    int codigo, qtd;
    double total;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if (codigo == 1) {
        total = qtd *  5.00;
    }
    else if (codigo == 2) {
        total = qtd *  3.50;
    }
    else if (codigo == 3) {
        total = qtd *  4.80;
    }
    else if (codigo == 4) {
        total = qtd *  8.90;
    }
    else if (codigo == 5) {
        total = qtd *  7.32;
    }

    printf("Valor a pagar: R$ %.2lf", total);

    return 0;
}
