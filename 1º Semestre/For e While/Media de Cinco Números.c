/******************************************************************************
1. Escreva um programa que calcule a média de 5 números fornecidos pelo usuário
usando um loop "while".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1;
    float n=0, soma=0, media=0;
    
    while(i<=5)
    {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &n);
        soma += n;
        i++;
    }
    
    media = soma/5.0;
    printf("A média dos números é %.2f.", media);
    
    return 0;
}
