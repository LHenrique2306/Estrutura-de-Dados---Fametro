#include <stdio.h>

void dobrar(int *num) {
    *num = (*num) * 2;
}

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Dobro = %d\n", valor);

    return 0;
}
