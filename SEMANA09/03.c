//Exercício 3 – Cópia de Vetor

//Enunciado:
//Escreva um programa que:
//	1.	Peça ao usuário o tamanho de um vetor de inteiros;
//	2.	Aloca dinamicamente esse vetor e leia seus valores;
//	3.	Aloca um segundo vetor do mesmo tamanho;
//	4.	Copie os valores do primeiro para o segundo vetor;
//	5.	Imprima os dois vetores;
//	6.	Libere a memória de ambos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor1, *vetor2;
    int n;

    // 1. Solicita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // 2. Aloca dinamicamente o primeiro vetor
    vetor1 = (int*) malloc(n * sizeof(int));
    if (vetor1 == NULL) {
        printf("Erro ao alocar memória para vetor1.\n");
        return 1;
    }

    // Lê os valores do vetor1
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // 3. Aloca dinamicamente o segundo vetor
    vetor2 = (int*) malloc(n * sizeof(int));
    if (vetor2 == NULL) {
        printf("Erro ao alocar memória para vetor2.\n");
        free(vetor1); // Libera o primeiro vetor antes de sair
        return 1;
    }

    // 4. Copia os valores do vetor1 para vetor2
    for (int i = 0; i < n; i++) {
        vetor2[i] = vetor1[i];
    }

    // 5. Imprime os dois vetores
    printf("\nVetor original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nCópia do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    // 6. Libera a memória alocada
    free(vetor1);
    free(vetor2);

    return 0;
}