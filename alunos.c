#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MINIMO 7

struct Aluno
{
    float nota1;
    float nota2;
    char nome[40];
    float media;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, n;
    char nome[40];
    struct Aluno *alunos;

    printf("\nQuantos alunos quer armazenar?\n");
    scanf("%i", &n);

    alunos = (struct Aluno *) malloc(n * sizeof(struct Aluno));

    if (alunos == NULL) 
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nDigite o nome do Aluno %d: \n", i + 1);
        scanf(" %[^\n]", &alunos[i].nome);
        printf("\nDigite a n1 do Aluno %d: \n", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("\nDigite a n2 do Aluno %d: \n", i + 1);
        scanf("%f", &alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2;

    }

    for (i = 0; i < n; i++) 
    {
        printf("\nNome: %s\n", alunos[i].nome);
        printf("\nNota 1 = %.2f", alunos[i].nota1);
        printf("\nNota 2 = %.2f", alunos[i].nota2);
        printf("\nMédia: %.2f\n", alunos[i].media);
        if (alunos[i].media >= MINIMO)
        {
            printf("Aprovado\n");
        }
        else 
        {
            printf("Reprovado\n");
        }

    }

    free(alunos);
    return 0;
}