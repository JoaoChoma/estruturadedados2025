//Exercício 2 – Média de Notas

//Enunciado:
//Crie um programa que:
//	1.	Pergunte ao usuário quantas notas ele deseja inserir;
//	2.	Aloca dinamicamente um vetor de float para armazenar as notas;
//	3.	Leia todas as notas e calcule a média;
//	4.	Exiba a média com duas casas decimais;
//	5.	Libere a memória alocada.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *notas;
    int n;
    float soma = 0.0;

    // 1. Pergunta ao usuário quantas notas deseja inserir
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &n);

    // 2. Aloca dinamicamente um vetor de float
    notas = (float *) malloc(n * sizeof(float));
    if (notas == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    // 3. Lê todas as notas e calcula a soma
    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // 4. Calcula e exibe a média
    float media = soma / n;
    printf("Média das notas: %.2f\n", media);

    // 5. Libera a memória alocada
    free(notas);

    return 0;
}