/******************************************************************************
4. Faça um programa para imprimir todos os números entre 1 e 100, 
exceto aqueles divisíveis por 6.
*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i=1; i<=100; i++)
    {
        if (i%6!=0)
            printf("%d\n", i);
    }

    return 0;
}
