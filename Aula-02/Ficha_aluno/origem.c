#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    struct ficha_aluno
    {
        int matricula;
        char nome[50];
        char disciplina[30];
        float nota;
    };

    struct ficha_aluno aluno;   // declaração da variável 'aluno' do tipo 'struct ficha_aluno'

    printf("**** Ficha do aluno ****\n");

    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);    // %d - tipo inteiro

    printf("Nome do aluno: ");
    getchar();  // Limpar o buffer do teclado antes de ler a string
    fgets(aluno.nome, sizeof(aluno.nome), stdin);  // %s - tipo string

    printf("Disciplina do aluno: ");
    fgets(aluno.disciplina, sizeof(aluno.disciplina), stdin);  // %s - tipo string

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);   // %f - tipo float

    printf("**** Ficha do aluno ****\n");

    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Disciplina: %s\n", aluno.disciplina);
    printf("Nota: %f\n", aluno.nota);

    return 0;
}
