#include <stdio.h>

int main() {

    // Declaração das variáveis
    int vetor[10];
    int i, maior, posicao;

    // Leitura dos valores
    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicialização
    maior = vetor[0];
    posicao = 0;

    // Busca do maior valor
    for(i = 1; i < 10; i++) {

        if(vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Exibição do resultado
    printf("Maior valor: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}
