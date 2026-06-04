#include <stdio.h>

int main() {

    // Declaração da variável
    int numero;

    // Entrada do número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificação
    if(numero % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
