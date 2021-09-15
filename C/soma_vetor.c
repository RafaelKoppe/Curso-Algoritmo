#include <stdio.h>

int main() {

    int N;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES = ");
    for(int i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }

    soma = vet[0];
    for(int i = 1; i < N; i++) {
        soma = soma + vet[i];
    }
    printf("\nSOMA = %.2lf", soma);

    media = soma / N;
    printf("\nMEDIA = %.2lf\n", media);

    return 0;
}
