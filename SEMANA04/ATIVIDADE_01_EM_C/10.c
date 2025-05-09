#include <stdio.h>

int main() {
    char nome[100];
    int idade;

    // Solicita o nome
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Solicita a idade
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Exibe a mensagem
    printf("%s tem %d anos.\n", nome, idade);

    return 0;
}
