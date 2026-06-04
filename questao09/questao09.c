#include <stdio.h>

int main() {

    // Declaração da variável
    float numero;

    // Entrada do número
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Verificação do valor
    if(numero > 0)
        printf("Positivo\n");
    else if(numero < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");

    return 0;
}
