#include <stdio.h>

void calcular(float a, float b,
              float *soma,
              float *sub,
              float *mult,
              float *div) {

    *soma = a + b;
    *sub = a - b;
    *mult = a * b;

    if (b != 0) {
        *div = a / b;
    } else {
        *div = 0;
    }
}

int main() {
    float n1, n2;
    float soma, sub, mult, div;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    calcular(n1, n2, &soma, &sub, &mult, &div);

    printf("Soma = %.2f\n", soma);
    printf("Subtracao = %.2f\n", sub);
    printf("Multiplicacao = %.2f\n", mult);
    printf("Divisao = %.2f\n", div);

    return 0;
}
