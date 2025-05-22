#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);
    printf("Olá, %s", nome);

    return 0;
}
