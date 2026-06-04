#include <stdio.h>

int main() {

    // Declaração das variáveis
    int matriz[2][2];
    int i, j;
    int soma = 0;

    // Leitura da matriz
    for(i = 0; i < 2; i++) {

        for(j = 0; j < 2; j++) {

            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    // Exibição do resultado
    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
