#include <stdio.h>

int main() {

    // Declaração das variáveis
    int vetor[5];
    int i;

    // Leitura dos valores
    for(i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibição dos valores
    printf("\nElementos do vetor:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
