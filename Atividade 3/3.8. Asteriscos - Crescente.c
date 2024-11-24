/******************************************************************************
8. Formas com asteriscos. Escreva um programa que imprima formas com asteriscos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n ; i++) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
