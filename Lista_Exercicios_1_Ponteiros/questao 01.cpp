#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; //usando uma terceira variavel para armazenamento
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    trocar(&x, &y);

    printf("Valores trocados:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
