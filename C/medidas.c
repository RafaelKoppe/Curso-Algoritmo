#include <stdio.h>
#include <stdlib.h>

int main() {

    double A, B, C, AQuadrado, ATriangulo, ATrapezio;

    printf("Digite a medida de A: ");
    scanf("%lf", &A);
    printf("Digite a medida de B: ");
    scanf("%lf", &B);
    printf("Digite a medida de C: ");
    scanf("%lf", &C);

    AQuadrado = A * A;
    ATriangulo = (A * B) / 2.0;
    ATrapezio = (A + B) * C / 2.0;

    printf("AREA DO QUADRADO = %.4lf\n", AQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n",ATriangulo);
    printf("AREA DO TRAPEZIO = %.4lf", ATrapezio);
    return 0;
}
