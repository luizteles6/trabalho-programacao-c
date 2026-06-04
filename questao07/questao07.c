#include <stdio.h>

int main() {

    // Declaração da variável
    int numero;

    // Entrada do número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Exibição do antecessor e sucessor
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);

    return 0;
}
