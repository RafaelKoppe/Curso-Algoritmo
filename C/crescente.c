#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;

    printf("Digite dois números:\n");
    scanf("%d %d", &x, &y);

    while (x != y) {
        if (x > y) {
            printf("Decrescente!\n");
        }
        else {
            printf("Crescente!\n");
        }

        printf("Digite outros dois números:\n");
        scanf("%d %d", &x, &y);
    }

    return 0;
}
