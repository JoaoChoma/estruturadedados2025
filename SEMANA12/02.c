#include <stdio.h>

// Passo 1: Definir o molde (a estrutura)
// Esta estrutura vai agrupar todas as informações de um círculo.
struct Circulo {
    int id;         // Um número de identificação
    float centro_x;   // Coordenada X do centro
    float centro_y;   // Coordenada Y do centro
    float raio;       // O raio do círculo
};

int main() {
    // Passo 2: Criar uma variável (instância) a partir do molde
    struct Circulo meuCirculo;

    printf("--- Cadastro de Circulo ---\n");

    // Pedir e armazenar os dados usando o operador '.'
    printf("Digite o ID do circulo (um numero inteiro): ");
    scanf("%d", &meuCirculo.id); // Armazena o valor no membro 'id'

    printf("Digite a coordenada X do centro: ");
    scanf("%f", &meuCirculo.centro_x); // Armazena no membro 'centro_x'

    printf("Digite a coordenada Y do centro: ");
    scanf("%f", &meuCirculo.centro_y); // Armazena no membro 'centro_y'

    printf("Digite o valor do raio: ");
    scanf("%f", &meuCirculo.raio); // Armazena no membro 'raio'

    // Passo 3: Exibir os dados armazenados na struct
    printf("\n--- Dados do Circulo Armazenado ---\n");
    printf("ID: %d\n", meuCirculo.id);
    printf("Centro do Circulo: (X=%.2f, Y=%.2f)\n", meuCirculo.centro_x, meuCirculo.centro_y);
    printf("Raio: %.2f\n", meuCirculo.raio);

    return 0;
}