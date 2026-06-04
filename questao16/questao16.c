#include <stdio.h>

int main() {

    // Declaração das variáveis
    int numero, i;
    long long fatorial = 1;

    // Entrada do número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Cálculo do fatorial
    for(i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    // Exibição do resultado
    printf("Fatorial de %d = %lld\n", numero, fatorial);

    return 0;
}
