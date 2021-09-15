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

    int N, maiorIdade, posicaomaior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char vetnomes[N][50];
    int vetidades[N];

    for(int i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(vetnomes[i],50);
        printf("Idade: ");
        scanf("%d", &vetidades[i]);
    }

    maiorIdade = vetidades[0];
    for(int i = 1; i < N; i++){
        if(vetidades[i] > maiorIdade){
            maiorIdade = vetidades[i];
            posicaomaior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", vetnomes[posicaomaior]);

    return 0;
}
