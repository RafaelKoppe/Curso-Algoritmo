#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int N, contf, nhomens;
    double menorAltura, maiorAltura, mediaFemTotal, alturafemtotal;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double vetAltura[N];
    char sexo[N];

    for(int i = 0; i < N; i++){
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &vetAltura[i]);
        printf("Genero da %da pessoa: ", i + 1);
        limpar_entrada();
        scanf("%c", &sexo[i]);
    }

    maiorAltura = vetAltura[0];
    menorAltura = vetAltura[0];
    for(int i = 1; i < N; i++) {
        if(vetAltura[i] < menorAltura){
            menorAltura = vetAltura[i];
        }
        if(vetAltura[i] > maiorAltura){
            maiorAltura = vetAltura[i];
        }
    }

    printf("Menor altura = %.2lf\n", menorAltura);
    printf("Maior altura = %.2lf\n", maiorAltura);

    alturafemtotal = 0;
    contf = 0;
    for(int i = 0; i < N; i++){
        if(sexo[i] == 'F') {
            alturafemtotal = alturafemtotal + vetAltura[i];
            contf = contf + 1;
        }
    }

    mediaFemTotal = alturafemtotal / contf;
    printf("mediaFemTotal das alturas das mulheres = %.2lf\n", mediaFemTotal);
    nhomens = N - contf;
    printf("Numero de homens = %d\n", nhomens);

    return 0;
}
