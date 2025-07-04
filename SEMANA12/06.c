// Crie uma struct Produto com os campos nome (string de até 30 caracteres), preco (float) e quantidade (int).
// Escreva um programa que leia os dados de um produto e exiba o valor total em estoque (preço × quantidade).



#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
    int quantidade;
};

int main() {
    struct Produto p;

    printf("Nome do produto: ");
    scanf(" %[^\n]", p.nome);

    printf("Preço: ");
    scanf("%f", &p.preco);

    printf("Quantidade: ");
    scanf("%d", &p.quantidade);

    float total = p.preco * p.quantidade;

    printf("Produto: %s\n", p.nome);
    printf("Total em estoque: R$ %.2f\n", total);

    return 0;
}