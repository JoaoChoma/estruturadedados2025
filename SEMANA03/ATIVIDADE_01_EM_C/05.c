#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Verifica e exibe o maior número
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os dois números são iguais: %d\n", num1);
    }

    return 0;
}
