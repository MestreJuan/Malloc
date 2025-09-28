#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd, i;
    int *vetor;

    printf("Digite quantos números quer armazenar:\n");
    scanf("%d", &qtd);

    vetor = (int *) malloc(qtd * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (i = 0; i < qtd; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("\nNúmeros digitados:\n");
    for (i = 0; i < qtd; i++)
    {
        printf("\n%i ", vetor[i]);
    }

    free(vetor);
    return 0;
}