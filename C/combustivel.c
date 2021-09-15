#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, alcool, diesel, gasolina;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &x);

    alcool = 0;
    diesel = 0;
    gasolina = 0;

    while (x != 4) {
        if (x == 1) {
            alcool = alcool + 1;
        }
        else if (x == 2) {
            gasolina = gasolina + 1;
        }
        else if (x == 3) {
            diesel = diesel + 1;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &x);
    }

    printf("MUITO OBRIGADO!\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
