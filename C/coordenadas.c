#include <stdio.h>
#include <stdlib.h>

int main() {

    double x, y;

    printf("Valor de x: ");
    scanf("%lf", &x);
    printf("Valor de y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    else if (x > 0 && y < 0) {
        printf("Q4\n");
    }
    else if (x == 0 && y == 0){
        printf("Origem\n");
    }
    else if (x == 0 && y != 0) {
        printf("Eixo y\n");
    }
    else {
        printf("Eixo x\n");
    }

        return 0;
}
