#include <stdio.h>

int main() {
    int num1, num2, num3, menor;

    // Solicita os três números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Determina o menor número
    menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    // Exibe o menor número
    printf("O menor número é: %d\n", menor);

    return 0;
}
