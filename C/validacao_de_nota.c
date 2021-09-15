#include <stdio.h>
#include <stdlib.h>

int main() {

    double pnota, snota, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &pnota);

    while(pnota < 0 || pnota > 10.0) {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &pnota);
    }

    printf("Digite a segunda nota: ");
    scanf("%lf", &snota);

    while(snota < 0 || snota > 10.0) {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &snota);
    }

    media = (pnota + snota) / 2.0;

    printf("MEDIA = %.2lf", media);

    return 0;
}
