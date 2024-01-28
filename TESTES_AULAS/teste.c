#include <stdio.h>

int main() {
    char caractere;

    for (caractere = 'A'; caractere <= 'Z'; caractere++) {
        putchar(caractere);
        printf("\n");
    }

    putchar('\n'); // Para imprimir uma nova linha no final

    return 0;
}
