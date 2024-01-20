#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	int* ptr, i;
	ptr = malloc(10 * sizeof(int));
		if (ptr == NULL)
		{
			printf("Espaço insuficiente.");
			exit(1);
		}
		else
		{
			printf("Primeiros 10 números.\n");
			for (i = 0; i < 10; i++)
			{
				ptr[i] = i + 10;
				printf(" %d - %d\n", i, ptr[i]);
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
	system("pause");
	return 0;
}