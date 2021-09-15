#include <stdio.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int N;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char nomes[N][50];
    double nota1[N], nota2[N], media;

    for(int i = 0; i < N; i++){
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
        limpar_entrada();
        ler_texto(nomes[i],50);
        scanf("%lf", &nota1[i]);
        scanf("%lf", &nota2[i]);
    }

    printf("ALUNOS APROVADOS:\n");
    for(int i = 0; i < N; i++){
        media = (nota1[i] + nota2[i]) / 2.0;
        if(media >= 6.0) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
