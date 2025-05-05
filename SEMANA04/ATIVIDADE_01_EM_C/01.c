#include <stdio.h>

int main() {
    int num1, num2;

    // Leitura dos dois números
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // Comparação e exibição do maior
    if (num1 > num2) {
        printf("O maior numero e: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número e: %d\n", num2);
    } else {
        printf("Os dois numeros sao iguais: %d\n", num1);
    }

    return 0;
}