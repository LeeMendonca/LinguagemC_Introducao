/******************************************************************************
7. Faça um programa que retorne a soma dos números ímpares 1 até n, sendo n 
fornecido pelo usuário.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0, soma=0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        if (i%2==1)
            soma +=i;
    }
    printf("%d", soma);

    return 0;
}
