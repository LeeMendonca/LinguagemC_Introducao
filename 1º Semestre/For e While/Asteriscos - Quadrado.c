/******************************************************************************
9. Quadrado de asteriscos. Escreva um programa que leia o lado de um quadrado e 
depois exiba esse quadrado a partir de asteriscos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n ; i++) {
        for (int j=1; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
