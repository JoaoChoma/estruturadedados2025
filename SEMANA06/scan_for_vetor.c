#include <stdio.h>

int main() {
    int i, valores[4];

    printf("Digite 4 valores:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Você digitou:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", valores[i]);
    }

    return 0;
}
