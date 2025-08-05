/******************************************************************************
2. Escreva um programa que calcule a média de 10 números fornecidos pelo
usuário usando um loop "for".
*******************************************************************************/
#include <stdio.h>

int main()
{
    float n=0, soma=0, media=0;
    
    for(int i=1; i<=10; i++)
    {
        printf("Digite o número %d: ", i);
        scanf("%f",&n);
        
        soma+=n;
    }
    
    media=soma/10.0;
    printf("A média dos números é igual a %.2f.", media);

    return 0;
}
