#include <stdio.h>

int main() {
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);  // Atenção: lê apenas até o primeiro espaço

    printf("Olá, %s!\n", nome);

    return 0;
}