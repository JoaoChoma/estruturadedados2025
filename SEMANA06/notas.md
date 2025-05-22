tipo nome[tamanho];

---


    v = (int *) malloc(n * sizeof(int));
Esta linha faz três coisas importantes:

✅ 1. sizeof(int)
Retorna o tamanho de um inteiro em bytes.

Em geral: 4 bytes (mas pode variar de sistema para sistema).

Se sizeof(int) for 4, então: n * sizeof(int) = 3 * 4 = 12 bytes.

✅ 2. malloc(n * sizeof(int))
malloc aloca um bloco de memória com 12 bytes.

Esse bloco é contíguo (um "vetor de inteiros").

A função retorna um ponteiro do tipo void * (um endereço genérico).

✅ 3. (int *) malloc(...)
Fazemos um type cast para int * porque malloc retorna void *.

Isso converte o ponteiro genérico para ponteiro para inteiro, que é o tipo de v.