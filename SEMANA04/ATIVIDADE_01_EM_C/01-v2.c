#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 5;

    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os dois números são iguais: %d\n", num1);
    }

    return 0;
}
