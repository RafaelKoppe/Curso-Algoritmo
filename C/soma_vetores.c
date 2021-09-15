#include <stdio.h>

int main() {

    int N;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int vetA[N];
    printf("Digite os valores do vetor A: \n");
    for(int i = 0; i < N; i++) {
        scanf("%d", &vetA[i]);
    }

    int vetB[N];
    printf("Digite os valores do vetor B: \n");
    for(int i = 0; i < N; i++) {
        scanf("%d", &vetB[i]);
    }

    int vetC[N];
    for(int i = 0; i < N; i++) {
        vetC[i] = vetA[i] + vetB[i];
    }

    printf("VETOR RESULTANTE: \n");
    for(int i = 0; i < N; i++) {
        printf("%d\n", vetC[i]);
    }

    return 0;
}
