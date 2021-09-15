#include <stdio.h>

int main() {

    char doistempo;
    double F, C;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &doistempo);

    if (doistempo == 'F') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = 5 / 9 * (F - 32);
        printf("Temperatura equivalente em Celsius: %.2lf", C);
    } else {
        printf("Digite a temperatura em Celsiu: ");
        scanf("%lf", &C);
        F = 9 * C / 5 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", F);
    }

    return 0;
}
