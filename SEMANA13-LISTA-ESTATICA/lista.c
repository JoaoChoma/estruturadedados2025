#include <stdio.h>

#define TAMANHO_MAXIMO 100

struct Elemento {
    int valor; // Elemento armazenado na lista
};

struct Lista{
    struct Elemento elementos[TAMANHO_MAXIMO]; // Vetor com tamanho fixo
    int primeiro; // Sempre 0, início da lista
    int ultimo;   // Indica a próxima posição livre
};

void Inicializa(struct Lista *lista) {
    lista->primeiro = 0; // Define o início da lista como posição 0
    lista->ultimo = 0;   // Nenhum elemento ainda, então última posição usada é 0
}

void InsereFinal(struct Lista *lista, int valor) {
    if (lista->ultimo < TAMANHO_MAXIMO) { // Verifica se ainda há espaço
        lista->elementos[lista->ultimo].valor = valor; // Atribui valor à posição disponível
        lista->ultimo++; // Atualiza o índice da próxima posição livre
    } else {
        printf("Erro: Lista cheia.\n"); // Lista atingiu o limite de elementos
    }
}

void RemoveNaPosicao(struct Lista *lista, int posicao) {
    if (posicao >= lista->primeiro && posicao < lista->ultimo) {
        for (int i = posicao; i < lista->ultimo - 1; i++) {
            lista->elementos[i] = lista->elementos[i + 1]; // Desloca os elementos para a esquerda
        }
        lista->ultimo--; // Reduz o número de elementos válidos
    } else {
        printf("Erro: Posição inválida.\n");
    }
}

int BuscaValor(struct Lista *lista, int valor) {
    for (int i = lista->primeiro; i < lista->ultimo; i++) {
        if (lista->elementos[i].valor == valor) {
            return i; // Retorna a posição do valor encontrado
        }
    }
    return -1; // Valor não encontrado
}

void ImprimeLista(struct Lista *lista) {
    printf("Lista: ");
    for (int i = lista->primeiro; i < lista->ultimo; i++) {
        printf("%d ", lista->elementos[i].valor);
    }
    printf("\n");
}

int main() {
    struct Lista minhaLista;
    Inicializa(&minhaLista);

    for (int i = 0; i < 100; i++)
    {
        InsereFinal(&minhaLista, i*10);
    }
    
    // InsereFinal(&minhaLista, 10);
    // InsereFinal(&minhaLista, 20);
    // InsereFinal(&minhaLista, 30);
    // ImprimeLista(&minhaLista);

    printf("Removendo elemento da posição 1...\n");
    RemoveNaPosicao(&minhaLista, 1);
    ImprimeLista(&minhaLista);

    int pos = BuscaValor(&minhaLista, 30);
    if (pos != -1)
        printf("Elemento 30 encontrado na posição %d\n", pos);
    else
        printf("Elemento 30 não encontrado.\n");

    return 0;
}