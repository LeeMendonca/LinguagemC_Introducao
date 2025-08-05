/******************************************************************************
Função - Soma
*******************************************************************************/
#include <stdio.h>

int somar(int a, int b) {
    return a+b;
}

int main()
{
    int n1, n2;
    
    printf("Digite n1: ");
    scanf("%d", &n1);
    
    printf("Digite n2: ");
    scanf("%d", &n2);
    
    int soma = somar(n1, n2);
    printf("Soma = %d", soma);

    return 0;
}
