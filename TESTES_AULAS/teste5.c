#include <stdio.h>

int main() {
    FILE *arquivo; // Ponteiro para o tipo FILE

    // Abre o arquivo para escrita (sobrescreve o conteúdo se já existir)
    arquivo = fopen("exemplo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Sair do programa com código de erro
    }

    // Escreve uma linha no arquivo
    fprintf(arquivo, "Hello, World!\n");

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
