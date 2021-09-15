#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, dinheiro, troco;
    int qtdproduto;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade de compra: ");
    scanf("%d", &qtdproduto);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (preco * qtdproduto);

    printf("TROCO = %.2lf", troco);
    return 0;
}
