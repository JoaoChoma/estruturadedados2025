#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No {
    char nome[50]; // Nome do produto
    float preco;   // Preço do produto
    int quantidade; // Quantidade em estoque    
    struct No *proximo;  // Ponteiro para o próximo nó
};

int inserirProduto(struct No **lista, char *nome, float preco, int quantidade)
{
    struct No *novo = (struct No *) malloc(sizeof(struct No));
    strcpy(novo->nome, nome); // Copia o nome do produto
    novo->preco = preco;
    novo->quantidade = quantidade;   
    *lista = novo; // O ponteiro da lista agora aponta para o novo nó
    return 0;
}

void coletar(){
     // remove o '\n'
}

int buscarProduto()
{
    printf("Buscando produto...\n");
    return 0;
}

int listarProdutos()
{
    printf("Listando produtos...\n");
    return 0;
}

int removerProdutos()
{
    printf("Removendo produtos...\n");
    return 0;
}

int main()
{
    struct No *listaProdutos = NULL;

    int opcao;
    do
    {
        printf("\n--- Modulo 01 ---\n");
        printf("1. Inserir novo produto.\n");
        printf("2. Buscar um produto.\n");
        printf("3. Listar produtos.\n");
        printf("4. Remover protudos.\n");
        printf("7. Sair.\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            char nome[50];
            printf("Digite o nome produto: \n");
            fgets(nome, 50, stdin);
            nome[strcspn(nome, "\n")] = '\0';
            printf("Digite o preco do produto: \n");
            float preco;
            scanf("%f", &preco);
            printf("Digite a quantidade do produto: \n");
            int quantidade;
            scanf("%d", &quantidade);
            inserirProduto(&listaProdutos, &nome, preco, quantidade);
            break;
        case 2:
            buscarProduto();
            break;
        case 3:
            listarProdutos();
            break;
        case 4:
            removerProdutos();
            break;
        case 7:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
        }
    } while (opcao != 7);

    return 0;
}