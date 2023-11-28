#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int size = 5; // ajustar tamanho
    int num[size];
    int i;
    int somaGeral = 0;
    int somapar = 0;
    int par = 0;
    int parArray[size]; // vetor com o tamanho dentro
    int somaimpar = 0;
    int impar = 0;
    int imparArray[size]; // Array to store odd numbers
    int positivo = 0;
    int negativo = 0;
    int quant = 0;
    int negativoArray[size];
    int positivoArray[size];
    int maior = 0;
    int menor = 999999;

    for (i = 0; i < size; i++) // chamador em ordem positiva
    {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
        quant++;
        somaGeral += num[i];

        if (num[i] % 2 == 0)
        {
            positivo++;
            negativo++;
            par++;                              // chamar vetor
            parArray[par - 1] = num[i];         // vetor para ordem inversa
            positivoArray[positivo - 1] = num[i];
            negativoArray[negativo - 1] = num[i];
            somapar += num[i];
        }
        else
        
        {
            impar++;  
               imparArray[impar - 1] = num[i];
                 somaimpar += num[i];



        }
        if ( num[i] > 0)
        {
            positivo++;
            
        }else{
             
             negativo++;

        }
        if (num[i] < menor)
        {
            menor = num[i];
        }
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }

    printf("\n");

    printf("menor:%d\n", menor);
    printf("maior:%d\n", maior);

    printf("quantidade números:%d\n", quant);
    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);
    printf("Quantidade de números negativos: %d\n", negativo);
    printf("Quantidade de números positivos: %d\n", positivo);

    printf("\nNúmeros ímpares em ordem reversa:\n");
    for (i = impar - 1; i >= 0; i--) // chamador de vetores em ordem inversa
    {
        printf("%d ", imparArray[i]);
    }

    printf("\n");

    printf("\nNúmeros pares em ordem reversa:\n");

    for (i = par - 1; i >= 0; i--) // chamador de vetores em ordem inversa
    {
        printf("%d ", parArray[i]);
    }

    printf("\n");

      printf("\nNúmeros em ordem reversa:\n");

    for (i = quant - 1; i >= 0; i--) // chamador de vetores em ordem inversa
    {
        printf("%d ", num[i]);
    }

    printf("\n");

    printf("media par:%.1f\n", somapar / (float)par);

    if (impar != 0)
    {
        printf("media impar:%.1f\n", somaimpar / (float)impar);
    }
    else
    {
        printf("Não há números ímpares para calcular a média.\n");
    }

    if (quant != 0)
    {
        printf("Média total:%.1f\n", somaGeral / (float)quant);
    }
    else
    {
        printf("Não há números para calcular a média total.\n");
    }

    return 0;
}


