#include <stdio.h>

int main() {
    int opcao;
    float total = 0;

    do {
        printf("\n--- Cofrinho Digital ---\n");
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("0 - Parar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                total += 0.50;
                break;
            case 2:
                total += 1.00;
                break;
            case 3:
                total += 2.00;
                break;
            case 0:
                printf("\nCofrinho encerrado!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Total acumulado: R$ %.2f\n", total);

    return 0;
}

