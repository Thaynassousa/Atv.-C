#include <stdio.h>

int main() {
    float consumo[5];
    float soma = 0, media;

    for (int i = 0; i < 5; i++) {
        printf("Digite o consumo do morador %d (em m3): ", i + 1);
        scanf("%f", &consumo[i]);

        soma += consumo[i];
    }

    printf("\n--- Resultado ---\n");

    for (int i = 0; i < 5; i++) {
        if (consumo[i] <= 20) {
            printf("Morador %d: %.2f m3 - Dentro da media.\n",
                   i + 1, consumo[i]);
        } else {
            printf("Morador %d: %.2f m3 - Acima da media.\n",
                   i + 1, consumo[i]);
        }
    }

    media = soma / 5;

    printf("\nConsumo medio geral: %.2f m3\n", media);

    return 0;
}

