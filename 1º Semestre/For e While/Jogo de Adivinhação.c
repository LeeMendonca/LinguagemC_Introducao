/******************************************************************************
2. Jogo de Adivinhação de Números: crie um programa que gere um número aleatório
entre 1 e 50 e peça ao usuário para adivinhar o número. O programa deve informar
se o palpite do usário é muito alto, muito baixo ou correto. O usuário deve ter
até 5 tentativas para adivinhar o número corretamente.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1, sorte=21, entrada=0;
    printf("Tente a sorte! Qual é o número secreto?\n");
    
    printf("Tentativa 1: ");
    scanf("%d", &entrada);
    
    while (i<=5)
    {
        if(entrada==sorte)
            break;
        else if (entrada<sorte)
        {
            printf("Não foi dessa vez. Tente novamente!\nDica, o número é maior do que %d ;) ", entrada);
            printf("Tentativa %d: ", i);
            scanf("%d", &entrada);
            i++;
        }
        else if (entrada>sorte)
        {
            printf("Não foi dessa vez. Tente novamente!\nDica, o número é menor do que %d ;) ", entrada);
            printf("Tentativa %d: ", i);
            scanf("%d", &entrada);
            i++;
        }

    }    
    if(entrada!=sorte)
        printf("Oh não! Acabaram suas tentativas :(\nMais sorte da próxima vez!");
    else
        printf("Parabéns! Você acertou!");
    
    return 0;
}