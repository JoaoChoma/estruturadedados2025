
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *proximo;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

int estaVazia(Fila *f) {
    return f->inicio == NULL;
}

int enfileirar(Fila *f, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) return 0;

    novo->dado = valor;
    novo->proximo = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
    } else {
        f->fim->proximo = novo;
    }

    f->fim = novo;
    return 1;
}

int desenfileirar(Fila *f, int *valorRemovido) {
    if (estaVazia(f)) return 0;

    No *remover = f->inicio;
    *valorRemovido = remover->dado;
    f->inicio = remover->proximo;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(remover);
    return 1;
}

int frente(Fila *f, int *valorFrente) {
    if (estaVazia(f)) return 0;

    *valorFrente = f->inicio->dado;
    return 1;
}

void liberar(Fila *f) {
    int aux;
    while (desenfileirar(f, &aux));
}

int main() {
    Fila f;
    inicializar(&f);

    enfileirar(&f, 10);
    enfileirar(&f, 20);
    enfileirar(&f, 30);

    int x;
    if (desenfileirar(&f, &x)) {
        printf("Removido: %d\n", x);
    }

    if (frente(&f, &x)) {
        printf("Frente: %d\n", x);
    }

    liberar(&f);
    return 0;
}
