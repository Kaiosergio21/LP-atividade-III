#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_PT");

    float notas[3][2];   // matrix para  notas,númmero de linhas e número de colunas
    int i, j;            // i linha j coluna
    char aluno[5][1000]; // metrix para vetores
    int soma = 0;
    float media[2]; // vetor da média

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno: "); // coletar nomes
        gets(aluno[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite uma nota: "); // coletar notar
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        media[i] = soma / (float)j; // corrigir calculo
        soma = 0;

        fflush(stdin); // Use proper method to clear input buffer
    }

    // Calculate and display the average grade for each student
    for (i = 0; i < 1; i++)
    {
        printf("\nNome do aluno: %s", aluno[i]); // exibir nomes dos alunos

        for (j = 0; j < 3; j++)
        {
            printf("\nNota do aluno: %.1f", notas[i][j]); // exibir notas
        }

        printf("\nMédia do aluno: %.2f\n", media[i]); // exibir média

        if (media[i] >= 7.0)
    {
        printf("Situação: Aprovado\n");
    }
    else if ( media[i] < 5.0)
    {
        printf("Situação: reprovado\n");
    }else{

        printf("recuperação");
    }
    }

   

    return 0;
}
