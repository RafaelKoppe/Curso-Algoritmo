#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main() {


    int N, nmenores;
    double soma, media, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomesVet[N][50];
    int idades[N];
    double alturas [N];

    for (int i = 0; i < N; i++) {
        printf("Dados da %da pessoas\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomesVet[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for(int i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }
    media = soma / N;
    printf("\nAltura media: %.2lf\n", media);

    nmenores = 0;
    for(int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            nmenores = nmenores + 1;
        }
    }

    percentualMenores = (nmenores * 100.0) / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    for(int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomesVet[i]);
        }
    }

    return 0;
}
