#include <stdio.h>
#include <string.h> // Necessário para usar strcpy

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;

    // Atribuindo valores
    strcpy(p1.nome, "Ana");  // É necessário incluir <string.h>
    p1.idade = 25;
    p1.altura = 1.68;

    // Exibindo
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}