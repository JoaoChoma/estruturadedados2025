// Crie uma função que receba um ponteiro para um vetor de inteiros e seu tamanho, e retorne a soma dos elementos.

#include <stdio.h>

int soma(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return soma;
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int resultado = soma(v, 5);
    printf("Soma: %d\n", resultado); // Saída: 15
    return 0;
}
