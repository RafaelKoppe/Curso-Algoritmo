#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x < 0 && x % 2 != 0) {
            printf("Impar negativo\n");
        }
        else if (x > 0 && x % 2 != 0) {
            printf("Impar positivo\n");
        }
        else if (x < 0 && x % 2 == 0) {
            printf("Par negativo\n");
        }
        else if (x > 0 && x % 2 == 0) {
            printf("Par positivo\n");
        }
        else {
            printf("Nulo\n");
        }
    }

    return 0;
}
