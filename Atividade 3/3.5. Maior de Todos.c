/******************************************************************************
5. Escreva um programa que encontre o maior número em uma lista de números
fornecidos pelo usuário usando um loop "while".

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n, maior;
    printf("Digite 0 para sair do loop.\n");
    
    
    while(1) {
        printf("Digite um número: ");
        scanf("%d", &n);
        
        if (n>maior)
            maior = n;
        else if (n == 0)
            break;
        
    }
    
    printf("O maior número é %d.", maior);
    

    return 0;
}
