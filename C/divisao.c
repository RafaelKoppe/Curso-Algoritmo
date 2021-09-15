#include <stdio.h>

int main() {

    int N, i;
    double x, y, divisao;

    printf("Qunatos casos voce vai digitar? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {

        printf("Entre com numerador: ");
        scanf("%lf", &x);
        printf("Entre com denominador: ");
        scanf("%lf", &y);

        if (y == 0) {
            printf("Divisao Impossivel\n");
        } else {
            divisao = x / y;
            printf("DIVISAO = %.2lf\n", divisao);
        }
    }

    return 0;
}
