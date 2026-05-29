#include <stdio.h>

void copiarString(char *origem, char *destino) {
    while (*origem != '\0') {
        *destino = *origem;

        origem++;
        destino++;
    }

    *destino = '\0';
}

int main() {
    char texto1[50] = "Fametro";
    char texto2[50];

    copiarString(texto1, texto2);

    printf("String copiada: %s\n", texto2);

    return 0;
}
