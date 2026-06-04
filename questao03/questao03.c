#include <stdio.h>

int main() {

    // Declaração das variáveis
    float num1, num2;

    // Entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Exibição dos resultados
    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtracao: %.2f\n", num1 - num2);
    printf("Multiplicacao: %.2f\n", num1 * num2);
    printf("Divisao: %.2f\n", num1 / num2);

    return 0;
}
