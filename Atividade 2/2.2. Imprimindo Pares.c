/******************************************************************************
2. Escreva um programa que solicite ao usuário um número e imprima os números
pares de 2 até o número inserido usando um loop "for".
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for (int i=2; i<=n; i+=2)
    {
        printf("%d\n", i);
    }

    return 0;
}
