#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int v_num = 10;    // v_num é uma variável que será apontada pelo ponteiro
    int *ptr;          // declaração de vaariável ponteiro

    ptr = &v_num;      // atribuindo o endereço da variável v_num ao ponteiro

    printf("Utilizando ponteiros\n\n");
    printf("Conteúdo da variável v_num: %d\n", v_num);
    printf("Endereço da variável v_num: %p\n", (void*)&v_num);
    printf("conteúdo da variável ponteiro ptr: %p", (void*)ptr);

    return 0;
}

/*********************************************************************************************************
     
     Ao imprimir o conteúdo do ponteiro ptr, é preferível usar o especificador de 
     formato %p em vez de %x para imprimir o endereço, pois %p é mais adequado para imprimir ponteiros.
     
*********************************************************************************************************/