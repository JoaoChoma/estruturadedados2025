#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantos números deseja armazenar? ");
    scanf("%d", &n);

    int *vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i * 10;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Segunda alocação (com realloc)
    printf("Quantos números deseja armazenar agora? ");
    scanf("%d", &n);

    int *temp = (int *) realloc(vetor, n * sizeof(int));
    if (temp == NULL)
    {
        printf("Erro na realocação de memória!\n");
        free(vetor); // Libera o anterior
        return 1;
    }else{
        vetor = temp;
    }
    

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i * 20;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    return 0;
}