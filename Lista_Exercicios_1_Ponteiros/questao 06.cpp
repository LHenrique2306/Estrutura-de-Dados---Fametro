#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;

    while (*str != '\0') {
        char c = tolower(*str);

        if (c >= 'a' && c <= 'z') {

            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }

        str++;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    int vogais, consoantes;

    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
