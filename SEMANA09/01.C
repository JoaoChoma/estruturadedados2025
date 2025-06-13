//Enunciado:
//Escreva um programa em C que:
//	1.	Solicite ao usuário um número n;
//	2.	Aloca dinamicamente um vetor de n inteiros usando malloc;
//	3.	Peça ao usuário para preencher o vetor;
//	4.	Imprima os elementos do vetor;
//	5.	Libere a memória alocada.



#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n;

    // 1. Solicita ao usuário o número de elementos
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    // 2. Aloca dinamicamente um vetor de n inteiros
    vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    // 3. Preenche o vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // 4. Imprime os elementos
    printf("Elementos digitados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // 5. Libera a memória alocada
    free(vetor);

    return 0;
}