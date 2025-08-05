/******************************************************************************
4. Cálculo de Média e Status do Aluno: Crie um programa que leia as notas de um
aluno e calculo a média. O programa de informar o status do aluno;
- Aprovado: média >= 7
- Recuperação: 4 < média < 7
- Reprovado: média < 4
O programa deve permitir que o usuário insira novas notas e calcule a média até
que deseje encerrar.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota=0, soma=0, media=0, quantidade=0;
    
    printf("Insira um valor negativo para encerrar.\n");
    
    while (nota>=0)
    {
        printf("Insira a nota: ");
        scanf("%f", &nota);
        if (nota>=0)
        {
            soma = soma+nota;
            quantidade++;
        }
    }
    
    media = soma/quantidade;
    
    if (media<4)
        printf("Reprovado. Média: %.2f", media);
    else if (media<7)
        printf("Recuperação. Média: %.2f", media);
    else if (media>=7)
        printf("Aprovado. Média: %.2f", media);

    return 0;
}
