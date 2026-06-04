#include <stdio.h>

int main() {

    // Declaração das variáveis
    int numero, i;

    // Entrada do número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Exibição da tabuada
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
