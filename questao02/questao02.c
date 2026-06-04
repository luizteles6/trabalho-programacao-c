#include <stdio.h>

int main() {

    // Variáveis inteiras
    int a, b;

    // Leitura dos números
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    // Exibição da soma
    printf("Soma: %d\n", a + b);

    // Exibição da divisão inteira
    printf("Divisao inteira: %d\n", a / b);

    // Exibição da divisão real utilizando casting
    printf("Divisao real: %.2f\n", (float)a / b);

    return 0;
}
