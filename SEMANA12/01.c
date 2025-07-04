// Descrição do Problema:
// Crie uma struct para representar um Retangulo com os campos largura e altura. Em seguida, implemente duas funções:

// Uma função que recebe um ponteiro para um Retangulo e solicita ao usuário que insira os valores de largura e altura.

// Uma função que recebe um ponteiro para um Retangulo e calcula e retorna a sua área.

// O programa principal deve declarar um Retangulo, chamar as duas funções e exibir a área calculada.

#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

// Define a estrutura para um Retangulo
struct Retangulo {
    float largura;
    float altura;
};

// Função para preencher os dados de um Retangulo via ponteiro
void preencherRetangulo(struct Retangulo *ret) {
    printf("Digite a largura do retangulo: ");
    scanf("%f", &ret->largura); // Usa -> para acessar membros via ponteiro

    printf("Digite a altura do retangulo: ");
    scanf("%f", &ret->altura); // É equivalente a (*ret).altura
}

// Função para calcular a área de um Retangulo via ponteiro
float calcularArea(const struct Retangulo *ret) {
    // 'const' indica que a função não modificará o conteúdo do ponteiro
    return ret->largura * ret->altura;
}

int main() {
    // Abordagem 1: Variável na Stack
    printf("--- Abordagem 1: Variavel na Stack ---\n");
    struct Retangulo ret1;
    preencherRetangulo(&ret1); // Passa o endereço da struct
    float area1 = calcularArea(&ret1);
    printf("A area do retangulo (stack) e: %.2f\n", area1);

    printf("\n----------------------------------------\n");

    // Abordagem 2 (Bônus): Alocação Dinâmica na Heap
    printf("\n--- Abordagem 2: Alocacao Dinamica (Heap) ---\n");
    // Aloca memória para um Retangulo e retorna um ponteiro para ele
    struct Retangulo *ret2 = (struct Retangulo*) malloc(sizeof(struct Retangulo));

    if (ret2 == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; // Termina o programa com erro
    }

    preencherRetangulo(ret2); // Passa o ponteiro diretamente
    float area2 = calcularArea(ret2);
    printf("A area do retangulo (heap) e: %.2f\n", area2);

    // Libera a memória alocada para evitar vazamentos de memória
    free(ret2);
    ret2 = NULL; // Boa prática: anular o ponteiro após o free

    return 0;
}