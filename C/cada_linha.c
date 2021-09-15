#include <stdio.h>

int main() {

    int N;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];
    int maiorValor;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA: \n");
    for (int i = 0; i < N; i++) {
        maiorValor = mat[i][0];
        for (int j = 1; j < N; j++) {
            if(mat[i][j] > maiorValor) {
              maiorValor = mat[i][j];
            }
        }
        printf("%d\n", maiorValor);
    }

    return 0;
}
