/******************************************************************************
Questão 5: Escreva um programa em C que leia um número inteiro do usuário e
utilize uma função para verificar se ele é par ou ímpar, exibindo a resposta
na tela.
*******************************************************************************/
#include <stdio.h>

int ParOuImpar(int n);

int main()
{
    int numero=0;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    ParOuImpar(numero);

    return 0;
}

int ParOuImpar(int n) {
    if (n%2==0)
        printf("%d é par!", n);
    else
        printf("%d é impar!", n);
        
    return 0;
}
