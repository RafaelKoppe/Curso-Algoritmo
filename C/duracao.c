#include <stdio.h>
#include <stdlib.h>

int main() {

    int duracao, segundos, minutos, horas, rest;

    printf("Digite a duracao em segundos:");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    rest = duracao % 3600;

    minutos = rest / 60;
    segundos = rest % 60;

    printf("%d:%d:%d",horas, minutos, segundos);
    return 0;
}
