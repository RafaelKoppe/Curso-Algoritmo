#include <stdio.h>
#include <stdlib.h>

int main() {

    double preco, dinheiro, valor, troco;
    int qtd;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    valor = preco * qtd;

    if (valor > dinheiro) {
        troco = valor - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", troco);
    } else {
        troco = dinheiro - valor;
        printf("TROCO = %.2lf", troco);
    }

    return 0;
}
