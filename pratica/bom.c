#include <stdio.h>

int main() {
    int n, i, j, contador = 0;

    // Solicita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Declara o vetor
    int vetor[n];

    // Lê os valores do vetor
    printf("Digite os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Conta os números pares e ímpares
    for (i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    // Imprime o resultado
    printf("Quantidade de números pares: %d\n", contador);
    
    return 0;
}