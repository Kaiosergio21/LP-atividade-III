#include <stdio.h>

int main() {
    int i, opcao;
    char contatos[10][5000]; 
    int count;

printf("quantidade de memória");
scanf("%d",&count);

    do {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Mostrar Contatos\n");
        printf("3. Encerrar\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (i = 0; i < count; i++) {
                    printf("Adicionar contato %d:\n", i + 1);
                    scanf("%s", contatos[i]); 
                }
                break;

            case 2:
                for (i = 0; i < count; i++) {
                    printf("Mostrar contato %d: %s\n", i + 1, contatos[i]);
                }
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
