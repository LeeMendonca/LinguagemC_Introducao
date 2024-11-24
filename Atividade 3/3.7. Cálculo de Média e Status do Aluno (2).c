/******************************************************************************
7. Escreva um programa que calcule a média de 4 notas de um aluno,
imprima se o aluno foi aprovado, caso média maior ou igual a 6, 
imprima reprovado se média menor que 6.
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float n1=0, n2=0, n3=0, n4=0, media=0;
    
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &n4);
    
    media = (n1+n2+n3+n4)/4.0;
    
    if (media>=6)
        printf("Média: %.2f. Aprovado(a).", media);
    else
        printf("Média: %.2f. Reprovado(a).", media);
    

    return 0;
}
