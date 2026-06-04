#include <stdio.h>

int main() {

    // Declaração das variáveis
    float media, frequencia;

    // Entrada dos dados
    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    printf("Digite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    // Verificação da aprovação
    if(media >= 7 && frequencia >= 75)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");

    return 0;
}
