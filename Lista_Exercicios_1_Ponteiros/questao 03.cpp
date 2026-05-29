#include <stdio.h>

int main() {
    int numero = 5;
    int *p;

    p = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", &numero);
    printf("Valor do ponteiro: %p\n", p);
    printf("Valor apontado pelo ponteiro: %d\n", *p);

    return 0;
}
