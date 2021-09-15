#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main() {

    int n, qtqCobaia, coelho, rato, sapo, totalCobaia;
    double porcentagemC, porcentagemR, porcentagemS;
    char comparacaoCobaia;

    printf("Quantos casos de testes serao digitados? ");
    scanf("%d", &n);

    coelho = 0;
    rato = 0;
    sapo = 0;

    for(int i = 1; i <= n; i++) {
        printf("Quantidades de cobaias: ");
        scanf("%d", &qtqCobaia);
        printf("Tipo de cobaia: ");
        limpar_entrada();
        scanf("%c", &comparacaoCobaia);

        if (comparacaoCobaia == 'c') {
            coelho = coelho + qtqCobaia;
        } else if (comparacaoCobaia == 's') {
            sapo = sapo + qtqCobaia;
        } else {
            rato = rato + qtqCobaia;
        }

    }

    totalCobaia = rato + coelho + sapo;
    porcentagemC = (double) coelho / totalCobaia * 100;
    porcentagemR = (double) rato / totalCobaia * 100;
    porcentagemS = (double) sapo / totalCobaia * 100;

    printf("\nRELATORIO FINAL: \n");
    printf("TOTAL: %d\n", totalCobaia);
    printf("TOTAL DE COELHO: %d\n", coelho);
    printf("TOTAL DE RATO: %d\n", rato);
    printf("TOTAL DE SAPO: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf\n", porcentagemC);
    printf("Percentual de rato: %.2lf\n", porcentagemR);
    printf("Percentual de sapo: %.2lf\n", porcentagemS);

    return 0;
}
