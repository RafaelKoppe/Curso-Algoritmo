#include <stdio.h>
#include <stdlib.h>

int main() {

    int horaInicial, horaFinal, duracao;

    printf("Hora inicial: ");
    scanf("%d", &horaInicial);

    printf("Hora final: ");
    scanf("%d", &horaFinal);

    if(horaInicial < horaFinal) {
         duracao = horaFinal - horaInicial;
    }
    else {
         duracao = 24 - horaInicial + horaFinal;
    }

    printf("O jogo durou %d HORA(S)", duracao);

    return 0;
}
