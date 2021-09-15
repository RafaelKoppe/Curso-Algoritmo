#include <stdio.h>

int main() {

    int N, posicaoMaior;
    double maiorv, menorv;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maiorv = vet[0];
    posicaoMaior = 0;
    for(int i = 1; i < N; i++) {
        if (vet[i] > menorv) {
            maiorv = vet[i];
            posicaoMaior = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maiorv);
    printf("POSICAO DO MAIOR VALOR = %d", posicaoMaior);

    return 0;
}
