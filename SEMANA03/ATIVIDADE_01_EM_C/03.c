#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Verificação da aprovação
    if (media >= 6.0) {
        printf("Aluno aprovado com média %.2f.\n", media);
    } else {
        printf("Aluno reprovado com média %.2f.\n", media);
    }

    return 0;
}
