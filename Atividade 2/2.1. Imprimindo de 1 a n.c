/******************************************************************************
1. Escreva um programa que solicite ao usuário um número e imprima os números
de 1 até o número inserido usando um loop "while".
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0, i=1;
    printf("Digite um númeoro: ");
    scanf("%d", &n);
    
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
