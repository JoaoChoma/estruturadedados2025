#include <stdio.h>

int main() {
    int num, i;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Exibe a tabuada de 1 a 10
    printf("Tabuada do %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
