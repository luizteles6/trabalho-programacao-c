#include <stdio.h>

int main() {

    // Declaração das variáveis
    float nota1, nota2, media;

    // Entrada das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Cálculo da média
    media = (nota1 + nota2) / 2;

    // Verificação da situação do aluno
    if(media >= 7)
        printf("Aprovado\n");
    else if(media >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}
