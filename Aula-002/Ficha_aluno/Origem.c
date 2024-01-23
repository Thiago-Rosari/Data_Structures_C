#include <stdio.h>    // Funções de I/O nos dispositivos stdin, stdout e files
#include <conio.h>    // Funções de manipulação de caracteres na tela


int main()
{
	struct ficha_aluno
	{
		int matricula;
		char nome[50];
		char disciplina[30];
		float nota;
	};

	struct ficha_aluno aluno;

	
	printf("**** Ficha do aluno ****\n");


	printf("Matricula do aluno: ");
	scanf_s("%d",&aluno.matricula);    // %d - tipo inteiro

	printf("Nome do aluno: ");
	scanf("%s",&aluno.nome);     // %s - tipo string

	printf("Disciplina do aluno: ");
	scanf("%s",&aluno.disciplina);  // %s - tipo string

	printf("Informe a nota do aluno: ");
	scanf_s("%f",&aluno.nota);   // %f - tipo float


	printf("**** Ficha do aluno ****\n");

	printf("Matricula: %d\n", aluno.matricula);
	printf("Nome: %s\n", aluno.nome);
	printf("Disciplina: %s\n", aluno.disciplina);
	printf("Nota: %f\n", aluno.nota);

	return 0;
}