#include <stdio.h>

int main() {
    char linha[100];

    printf("Digite uma linha de texto: ");
    gets(linha);

    printf("Você digitou: %s\n", linha);

    return 0;
}
