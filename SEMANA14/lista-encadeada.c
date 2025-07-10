#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;           // Dado armazenado
    struct No *proximo;  // Ponteiro para o próximo nó
};

void insereInicio(struct No **lista, int valor) {
    struct No *novo = (struct No *) malloc(sizeof(struct No));  // Aloca memória para um novo nó
    novo->valor = valor;                   // Atribui o valor
    novo->proximo = *lista;                // O novo nó aponta para o antigo início
    *lista = novo;                         // O ponteiro da lista agora aponta para o novo nó
}

void removeValor(struct No **lista, int valor) {
    struct No *anterior = NULL;
    struct No *atual = *lista;

    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Valor não encontrado.\n");
        return;
    }

    if (anterior == NULL) {
        *lista = atual->proximo; // Removendo o primeiro nó
    } else {
        anterior->proximo = atual->proximo; // Pula o nó atual
    }

    free(atual); // Libera memória
}

void imprimeLista(struct No *lista) {
    printf("Lista: ");
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->proximo;
    }
    printf("NULL\n");
}

int main() {
    struct No *lista = NULL;

    insereInicio(&lista, 10);
    insereInicio(&lista, 20);
    insereInicio(&lista, 30);
    insereInicio(&lista, 40);
    imprimeLista(lista);

    printf("Removendo valor 20...\n");
    removeValor(&lista, 20);
    imprimeLista(lista);

    return 0;
}