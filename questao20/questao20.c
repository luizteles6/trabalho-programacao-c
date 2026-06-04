#include <stdio.h>

int main() {

    // Declaração das variáveis
    int matriz[3][3];
    int i, j;

    // Leitura da matriz
    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da diagonal principal
    printf("Diagonal principal:\n");

    for(i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}
