/******************************************************************************
5. Maior de Três Números: Faça um programa que leia três números inteiros e imprima o maior deles.
Suponha que não tem números iguais.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1=0, n2=0, n3=0;
    printf("Digita 3 números inteiros diferentes.\n");
    printf("Número 1: ");
    scanf("%d", &n1);
    printf("Número 2: ");
    scanf("%d", &n2);
    printf("Número 3: ");
    scanf("%d", &n3);
    
    if (n1>n2 && n1>n3)
        printf("O número %d é o maior.", n1);
    else if (n2>n1 && n2>n3)
        printf("O número %d é o maior.", n2);
    else if (n3>n1 && n3>n2)
        printf("O número %d é o maior.", n3);
    
    return 0;
}
