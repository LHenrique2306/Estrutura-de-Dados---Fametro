#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    scanf("%s", texto);

    inverterString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}
