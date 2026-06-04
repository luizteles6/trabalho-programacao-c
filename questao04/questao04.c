#include <stdio.h>

int main() {

    // Declaração das variáveis
    int num1, num2;

    // Entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Comparação dos números
    if(num1 == num2)
        printf("Os numeros sao iguais.\n");

    if(num1 > num2)
        printf("O primeiro numero e maior.\n");

    if(num2 > num1)
        printf("O segundo numero e maior.\n");

    return 0;
}
