#include <stdio.h>

int main() {
    char linha[100];

    printf("Digite uma linha de texto: ");
    fgets(linha, sizeof(linha), stdin);

    printf("Você digitou: %s\n", linha);

    return 0;
}
