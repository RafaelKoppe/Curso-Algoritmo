#include <stdio.h>

int main() {

    int n;
    double x, y, z, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite tres numeros: \n");
        scanf("%lf %lf %lf", &x, &y, &z);
        media = (x * 2 + y * 3 + z * 5) / 10.0;
        printf("MEDIA = %.1lf\n", media);
    }

    return 0;
}
