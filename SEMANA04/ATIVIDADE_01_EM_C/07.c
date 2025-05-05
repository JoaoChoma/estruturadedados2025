#include <stdio.h>

int main() {
    float base, altura, area;

    // Solicita os dados ao usuário
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Calcula a área
    area = base * altura;

    // Exibe o resultado
    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
