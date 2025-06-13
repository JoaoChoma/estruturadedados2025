#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantos números deseja armazenar? ");
    scanf("%d", &n);

    // Alocação dinâmica de um vetor de n inteiros
    int *vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // Preenchendo o vetor
    for (int i = 0; i < n; i++)
    {
        vetor[i] = i * 10;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Liberando memória
    free(vetor);

    //vetor = (int *) malloc(n * sizeof(int));
    printf("Quantos números deseja armazenar? ");
    scanf("%d", &n);

    // usa memoria que pode conter lixo

    // Preenchendo o vetor
    for (int i = 0; i < n; i++)
    {
        vetor[i] = i * 10;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Liberando memória
    free(vetor);

    return 0;
}