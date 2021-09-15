#include <stdio.h>

int main() {

    int x, y, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &x);

    dentro = 0;
    fora = 0;

    for (int i = 1; i <= x; i++) {
        printf("Digite um numero: ");
        scanf("%d", &y);

        if (y >= 10 && y <=20) {
            dentro = dentro + 1;
        } else {
            fora = fora + 1;
        }
    }

    printf("%d DENTRO\n",dentro);
    printf("%d FORA\n", fora);

    return 0;
}
