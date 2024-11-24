/******************************************************************************
1. Escreva um programa que imprima uma sequência numérica.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n ; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
