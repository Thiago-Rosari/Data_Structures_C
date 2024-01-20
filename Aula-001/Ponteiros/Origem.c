#include <stdio.h>
#include <conio.h>

int main(void)
{
	int v_num = 10;		//v_num é a variável que será apontada pelo ponteiro
	int* ptr;			//declaração de variável ponteiro
	
	ptr = &v_num;		//atribuindo o endereço da variável v_num ao ponteiro	
		
	
	printf("Utilizando ponteiros\n\n");
	printf("Conteúdo da variável v_num: %d\n", v_num);
	printf("Endereço da variável v_num: %x \n", &v_num);
	printf("Conteúdo da variável ponteiro ptr: %x", ptr);
	
	//getch();
	return(0);
}