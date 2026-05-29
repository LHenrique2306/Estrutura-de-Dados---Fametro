#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    *maior = array[0];
    *menor = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
        }

        if (array[i] < *menor) {
            *menor = array[i];
        }
    }
}

int main() {
    int numeros[5] = {10, 4, 25, 1, 8};
    int maior, menor;

    encontrarMaiorMenor(numeros, 5, &maior, &menor);

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);

    return 0;
}
