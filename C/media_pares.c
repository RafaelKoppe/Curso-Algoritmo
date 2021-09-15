#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, soma = 0, contpares = 0;
    double mediapares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < N; i++) {
        if(vet[i] % 2 == 0) {
            soma = soma + vet[i];
            contpares = contpares + 1;
        }
    }

    if (contpares == 0){
        printf("NENHUM NUMERO PAR\n");
    }else {
        mediapares = (double)soma / contpares;
        printf("MEDIA DOS PARES: %.1lf", mediapares);
    }

    return 0;
}
