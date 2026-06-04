#include <stdio.h>

int main() {

    // Declaração das variáveis
    char nome[19];
    char cidade[50];
    int idade;

    // Entrada dos dados
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua cidade: ");
    scanf(" %[^\n]", cidade);

    // Exibição dos dados
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Cidade: %s\n", cidade);

    return 0;
}
