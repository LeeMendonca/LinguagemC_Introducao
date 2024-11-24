/******************************************************************************
3. Escreva um programa que solicite ao usuário um número e imprima os números
de 1 até o número inserido exceto os números múltiplos de 3, usando um laço 
de repetição.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1, n=0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    while (i<=n) {
        if (i%3!=0)
            printf("%d\n", i);
        i++;
    }
    
    return 0;
}
