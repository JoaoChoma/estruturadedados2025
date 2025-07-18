#include <stdio.h>

#define TAM_MAX 100

typedef struct {
    int dados[TAM_MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

int estaVazia(Fila *f) {
    return f->tamanho == 0;
}

int estaCheia(Fila *f) {
    return f->tamanho == TAM_MAX;
}

int enfileirar(Fila *f, int valor) {
    if (estaCheia(f)) return 0;

    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % TAM_MAX;
    f->tamanho++;
    return 1;
}

int desenfileirar(Fila *f, int *valorRemovido) {
    if (estaVazia(f)) return 0;

    *valorRemovido = f->dados[f->inicio];
    for (int i = f->inicio; i < f->fim - 1; i++) {
        f->dados[i] = f->dados[i + 1];
    }
    f->fim = (f->fim - 1 + TAM_MAX) % TAM_MAX;
    // início sempre será zero após a realocação
    f->inicio = 0;
    f->tamanho--;
    return 1;
}

int frente(Fila *f, int *valorFrente) {
    if (estaVazia(f)) return 0;

    *valorFrente = f->dados[f->inicio];
    return 1;
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

    return 0;
}
