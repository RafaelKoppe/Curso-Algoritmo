#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, abaixo, entre, acima;
    double totalCompra, totalVenda, porcentagemdeLucro, lucroTotal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nome[N][50];
    double compra[N], venda[N];

    for(int i = 0; i < N; i++){
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nome[i][50]);
        printf("Preco de compra: ");
        scanf("%lf", &compra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &venda[i]);
    }

    abaixo = 0;
    entre = 0;
    acima = 0;
    for(int i = 0; i < N; i++){
        porcentagemdeLucro = ((venda[i] - compra[i]) * 100) / compra[i];
        if(porcentagemdeLucro < 10) {
            abaixo = abaixo + 1;
        } else if(porcentagemdeLucro <= 20){
            entre = entre + 1;
        } else{
            acima = acima + 1;
        }
    }

    totalCompra = 0;
    totalVenda = 0;
    for(int i = 0; i < N; i++){
        totalCompra = totalCompra + compra[i];
        totalVenda = totalVenda + venda[i];
    }

    lucroTotal = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);

    return 0;
}
