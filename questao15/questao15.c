#include <stdio.h>

int main() {

    // Declaração das variáveis
    int numero, soma = 0, i;

    // Leitura dos 5 números
    for(i = 1; i <= 5; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;
    }

    // Exibição da soma
    printf("Soma total: %d\n", soma);

    return 0;
}
