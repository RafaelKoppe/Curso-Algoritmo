#include <stdio.h>
#include <math.h>

int main() {

    int N, linha, coluna, npositivo;
    double somaPositivo = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    double mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%lf", &mat[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] > 0){
                somaPositivo = somaPositivo + mat[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf", somaPositivo);

    printf("\n\nEscolha uma linha: ");
    scanf("%d", &linha);
    printf("LINHA ESCOLHIDA: ");
    for(int j = 0; j < N; j++){
        printf("%.1lf ", mat[linha][j]);
    }

    printf("\n");
    printf("\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("COLUNA ESCOLHIDA: ");
    for(int i = 0; i < N; i++){
        printf("%.1lf ", mat[i][coluna]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");
    for(int i = 0 ; i < N; i++){
        printf("%.1lf ", mat[i][i]);
    }

    printf("\n\nMATRIZ ALTERADA:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] < 0){
                npositivo = pow(mat[i][j], 2);
                mat[i][j] = npositivo;
            }
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
