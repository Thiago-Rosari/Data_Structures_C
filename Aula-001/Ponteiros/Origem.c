#include <stdio.h>
#include <conio.h>

int main(void)
{
	int v_num = 10;		//v_num � a vari�vel que ser� apontada pelo ponteiro
	int* ptr;			//declara��o de vari�vel ponteiro
	
	ptr = &v_num;		//atribuindo o endere�o da vari�vel v_num ao ponteiro	
		
	
	printf("Utilizando ponteiros\n\n");
	printf("Conte�do da vari�vel v_num: %d\n", v_num);
	printf("Endere�o da vari�vel v_num: %x \n", &v_num);
	printf("Conte�do da vari�vel ponteiro ptr: %x", ptr);
	
	//getch();
	return(0);
}