#include <stdio.h>

int main() {

    // Declaração das variáveis
    float num1, num2;
    char operacao;

    // Entrada dos dados
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    // Escolha da operação
    switch(operacao) {

        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            printf("Resultado: %.2f\n", num1 / num2);
            break;

        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
