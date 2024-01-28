#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int *ptr, i;
    ptr = malloc(10 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Endereço insuficiente.");
        exit(1);
    }
    else
    {
        printf("Primeiros 10 números.\n");
        for(i = 0; i < 10; i++)
        {
            ptr[i] = i + 10;
            printf("%d - %d\n", i, ptr[i]);
        }
        ptr = realloc(ptr, 20 * sizeof(int));

        printf("Realocando para mais 10 números.\n");
        for (i = 10; i < 20; i++)
        {
	        ptr[i] = i + 20;
	        printf(" %d - %d\n", i, ptr[i]);
        }
        printf("Todos os 20 números alocados.\n");

        for (i = 0; i < 20; i++)
        {
            printf(" %d - %d\n", i, ptr[i]);
        }
        free(ptr);
    }

    return 0;
}