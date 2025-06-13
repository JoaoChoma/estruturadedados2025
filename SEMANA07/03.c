#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;

    printf("Alocando %d inteiros...\n", n);
    int *vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Preenche o vetor com dados
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    printf("Endereço de vetor antes do realloc: %p\n", (void *)vetor);
    printf("Conteúdo antes do realloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Realocando para 6 inteiros
    n = 6;
    printf("\nTentando realocar para %d inteiros...\n", n);

    int *temp = (int *) realloc(vetor, n * sizeof(int));
    if (temp != NULL) {
        vetor = temp;
        printf("Realloc bem-sucedido.\n");
    } else {
        printf("Erro na realocação de memória.\n");
        // vetor ainda possui a memória antiga
        free(vetor);
        return 1;
    }

    // Preenche os novos elementos
    for (int i = 3; i < n; i++) {
        vetor[i] = (i + 1) * 10;
    }

    printf("Endereço de vetor depois do realloc: %p\n", (void *)vetor);
    printf("Conteúdo depois do realloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}