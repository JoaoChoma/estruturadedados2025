#include <stdio.h>

int main() {
    int numeros[5];  // Array com 5 posições

    // Preenchendo o array com valores
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para numeros[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    // Exibindo os valores do array
    printf("\nValores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}