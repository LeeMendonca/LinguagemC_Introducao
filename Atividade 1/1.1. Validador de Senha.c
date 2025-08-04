/******************************************************************************
1. Validador de senha: Crie um programa que solicite ao usuário para criar uma 
senha com valores inteiros. O programa deve validar a senha e informar se ela é
válida ou não. O usuário deve ter a opção de tentar criar uma nova senha até
fornecer uma senha válida.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int senha=0, entrada=0;
    printf("Crie uma senha com valores inteiros: ");
    scanf("%d", &senha);
    
    printf("Digite sua senha: ");
    scanf("%d", &entrada);
    
    while (entrada!=senha)
    {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &entrada);
    }

    if (entrada==senha)
        printf("Senha correta! Login salvo.");
    
    return 0;
}
