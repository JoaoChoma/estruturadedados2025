#include <stdio.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}
