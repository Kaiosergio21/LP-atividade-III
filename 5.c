#include <stdio.h>

int main()
{
    int i, opcao;
    char nome[3][5000];
    float preco[3];
    int quant[3];
    int count;
    float soma = 0;

    printf("quantidade de produtos a serem adcionados");
    scanf("%d", &count);

    fflush(stdin);

    do
    {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar um produto\n");
        printf("2. Mostrar Contatos\n");
        printf("3. Encerrar\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            for (i = 0; i < count; i++)
            {
                printf("nome do produto");
                gets("%s", &nome[i]);
                fflush(stdin);

                printf("Adicionar preço do produto");
                scanf("%f", &preco[i]);
                fflush(stdin);
                printf("Adicionar preço do produto");
                scanf("%d", &quant[i]);

                soma += preco[i] * quant[i];
            }
            break;

        case 2:

            printf("valor total da compra:R$%.2f\n", soma);

            break;

        case 3:
            printf("Encerrando o programa.\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
