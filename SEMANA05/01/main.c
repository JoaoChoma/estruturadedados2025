#include <stdio.h>

int main(){
    int a = 5;

    int *pa = &a;

    printf("Valor de a: %d\n", a); // Saída: 5
    printf("Endereço de a: %p\n", &a); // Endereço de a
    printf("Valor de pa: %p\n", pa); // Endereço de a
    printf("Valor apontado por pa: %d\n", *pa); // Saída: 5
    printf("Endereço de pa: %p\n", &pa); // Endereço de pa
}