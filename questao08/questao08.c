#include <stdio.h>

int main() {

    // Declaração das variáveis
    float celsius, fahrenheit;

    // Entrada da temperatura
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Conversão para Fahrenheit
    fahrenheit = (9 * celsius / 5) + 32;

    // Exibição do resultado
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
